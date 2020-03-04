SHELL := /bin/bash

all: background code

background:
	cp screens/*.bmp /Volumes/PYPORTAL

code: build save
	cp code.py /Volumes/PYPORTAL

# https://learn.adafruit.com/building-circuitpython/build-circuitpython
get-mpy-cross:
	pip install huffman
	git clone https://github.com/adafruit/circuitpython.git;
	pushd circuitpython; \
	git submodule update --init --recursive; \
	popd
	pushd circuitpython/mpy-cross; \
	make; \
	popd

