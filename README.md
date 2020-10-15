# pi443mhz

TRUST AC3-1000R utility for 443 MHz transmitter 

## Requirements

- Raspberry Pi 3A+ 
- gpio 2.52 (Install the supplied version by `sudo dpkg -i wiringpi-latest.deb `)
  - Double check the version by:
     - `gpio -v`
     - `gpio readall`
     
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
