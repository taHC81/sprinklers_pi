# sprinklers_pi
Sprinklers Pi is a sophisticated Irrigation control system for the Raspberry Pi.  The system contains a built in mobile web page server that can be used to configure and monitor the system status from anywhere.  It can also be cross compiled on an AVR/Arduino platform with appropriate networking and storage hardware.

## Major Features
* Fully contained system with control logic and web serving.
* Same code can be compiled to run on the Atmel/AVR/Arduino platform.
* Web based control (including mobile Android iOS)
* Automatic adjustment of intervals based on weather conditions. (weather underground API)
* Weather conditions can be pulled from individual personal weather stations or from general weather data based on zipcode.
* Manual Control
* Scheduled Control
* Quick Schedule
* Named Zones
* Full Graphing feature of historic logs
* Ability to run with OpenSprinkler module or direct relay outputs.
* Supports master valve/pump output
* Supports expansion zone board (up to 15 zones)
* Very simple installation
* Seasonal adjustment.

## WiringPI for Orange Pi
Use the one from `https://github.com/zhaolei/WiringOP`

## Weather Setup
By default, we now ship with no weather provider enabled, and therefore no adjustment performed.
Follow the directions below to enable a weather provider. If you change weather providers be sure to run "make clean"
before rebuilding.

## Building
```Shell
make
sudo make install
```
NOTE: If you are running an older version of g++ compiler you may see the error `unrecognized command line option '-std=c++11'`. You should either update to g++ version 4.8+, or if you are not using DarkSky as a weather provider, you can remove `-std=c++11` at the end of line 8 in the Makefile. You can see what version of g++ you have by running `g++ --version`.

## Running
`sudo /etc/init.d/sprinklers_pi start`

See the wiki for more information: https://github.com/rszimm/sprinklers_pi/wiki
