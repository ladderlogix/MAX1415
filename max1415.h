//define lib
#ifndef max1415_h
#define max1415_h

//include libs
#include "Arduino.h"
#include "SPI.h"

class max1415
{

   public:

	max1415(int CS, int Select);
	void ADCSerialInt();
	void ChipConfig();
	unsigned int GetReading();
	void WaitForData();

};

#endif
