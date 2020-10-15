#include<iostream>

#include "NewRemoteReceiver.h"
#include "NewRemoteTransmitter.h"


static unsigned long ADDRESS = 17503242; // TRUST AC3-1000R
static unsigned short DATA_PIN = 0;
static unsigned int PULSE_RATE = 250; // Pulse rate of the protocol

int main(int argc, char *argv[]){
   wiringPiSetup();
   NewRemoteTransmitter transmitter(ADDRESS, DATA_PIN, PULSE_RATE);

   unsigned int device = 2;
   bool isOn = false;


   std::cout << "Please enter device id (0, 1 or 2): " << std::endl;
   std::cin >> device;

   std::cout << "Enter off (0) or on (1) state: " << std::endl;
   std::cin >> isOn;

   transmitter.sendUnit(device, isOn);

   return 0;
}
