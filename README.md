# pi443mhz

TRUST AC3-1000R utility for 443 MHz transmitter 

## Requirements

- Raspberry Pi 3A+ or Raspberry Pi 4
- gpio 2.52
  1. Remove currently installed: `sudo apt-get purge wiringpi` 
  2. Install the supplied version by `sudo dpkg -i wiringpi-latest.deb `)
  3. Double check the version by:
     - `gpio -v`
     - `gpio readall`
- A sane version of CMake (`sudo apt install cmake`)
- C++14 (`sudo apt install build-essential`)
     
## Configuration

Make sure these are correct in `src/main.cpp`:

```cpp
...
static unsigned long ADDRESS = 17503242; // TRUST AC3-1000R
static unsigned short DATA_PIN = 0;
static unsigned int PULSE_RATE = 250; // Pulse rate of the protocol
...
```


## Build

To build, run:

```
mkdir build
cd build
cmake ..
make
./pi443mhz
```
or while in `~/pi443mhz`:

```
rm -rf ./build/; mkdir build/; cd build/; cmake ..; make; ./pi443mhz
```

## Quick Usage

```
printf "2\n1\n" | ./pi443mhz
printf "2\n0\n" | ./pi443mhz
```

## Troubleshooting

Test your GPIO with [blink example](http://wiringpi.com/examples/blink/).
