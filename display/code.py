"""
Status Indicator

This module runs on an Adafruit PyPortal and displays a give screen indicating the
status received from the monitor end point.

For more information about the PyPortal see https://learn.adafruit.com/adafruit-pyportal
"""
import board
from time import sleep
from adafruit_pyportal import PyPortal

try:
    from secrets import secrets  # noqa
except ImportError:
    print("WiFi secrets are kept in secrets.py, please add them there!")
    raise

# Setup portal with status feed from secrets due to PSK.
pyportal = PyPortal(
    url=secrets["signal"],
    default_bg="green.bmp"
)

current = 0

while True:
    status = int(pyportal.fetch())
    if status == 0 and status == current:
        pass
    elif status == 0 and status != current:
        pyportal.set_background("green.bmp")
        current = 0
    elif status == 1 and status != current:
        pyportal.set_background("red.bmp")
        current = 1
    elif status == 1 and status == current:
        pass
    sleep(30)
