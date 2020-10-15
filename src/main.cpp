#include<iostream>

#include "NewRemoteReceiver.h"
#include "NewRemoteTransmitter.h"


static unsigned long ADDRESS = 17503242; // TRUST AC3-1000R
static unsigned short DATA_PIN = 15;
static unsigned int PULSE_RATE = 250; // Pulse rate of the protocol

int main(int argc, char *argv[]){
   NewRemoteTransmitter transmitter(ADDRESS, DATA_PIN, PULSE_RATE);

   unsigned int device = 0;
   bool isOn = false;


   transmitter.sendUnit(device, isOn);

   std::cout << "Hello World!" << std::endl;
   return 0;
}
