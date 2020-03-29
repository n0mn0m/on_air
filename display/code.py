"""
Status Indicator

This module runs on an Adafruit PyPortal and displays a give screen indicating the
status received from the monitor end point.

For more information about the PyPortal see https://learn.adafruit.com/adafruit-pyportal
"""
import board
import supervisor
import time
from adafruit_pyportal import PyPortal

try:
    from secrets import secrets  # noqa
except ImportError:
    print("WiFi secrets are kept in secrets.py, please add them there!")
    raise

# Setup portal with status feed from secrets due to PSK.
pyportal = PyPortal(
    url=secrets["signal"],
    status_neopixel=board.NEOPIXEL,
)

pyportal.set_backlight(.5)

def deep_sleep(portal):
    """
    Turn off from 9PM EST till 6AM EST and sleep.
    """
    portal.set_background(0)
    portal.set_backlight(0)
    portal.neo_status((0, 0, 0))
    # Magic numbers, this is 9 hours in seconds
    time.sleep(32400)
    portal.set_backlight(.5)
    
def get_current_hour(portal):
    try:
        portal.get_local_time(location="Louisville, US")
        t = time.localtime()
        return int(t.tm_hour)
    except:
        # This is being checked every 5 minutes and the utility
        # is to shut the device screen off and sleep for 9 hours.
        # Sometimes the API times out, so to handle that just pass
        # back 0 and we will check the API again in 5 minues.
        return 0
    
def interpret_status(portal, current):
    status = int(pyportal.fetch())
    if status == 0 and status == current:
        return 0
    elif status == 0 and status != current:
        pyportal.set_background("green.bmp")
        pyportal.neo_status((0, 255, 0))
        return 0
    elif status == 1 and status != current:
        pyportal.set_background("red.bmp")
        pyportal.neo_status((255, 0, 0))
        return 1
    elif status == 1 and status == current:
        return 1


status = None
# Initializer with a numeric we should never find
# after the first pass of the control loop so that
# we check time on the first pass, but then only
# ever N loops/time duration after.
last_check = -1

while True:
    # Start by checking the time if we haven't in the 
    # last 5 minutes. If it's after a given time threshold
    # go to sleep, otherwise check and display status.
    try:
        if  last_check > 10 or last_check == -1:
            last_check = 0
            hour = get_current_hour(pyportal)
            print(hour)
            if hour >= 21:
                deep_sleep(pyportal)
        else:
            status = interpret_status(pyportal, status)
        last_check += 1
        time.sleep(30)
    except RuntimeError:
        supervisor.reload()
