#ifndef HARDWARE_H
#define HARDWARE_H
#include "SAL.h"
class Hardware
{
protected:
	static short int PC;
	static SAL memory[];
	static short registerA_;
	static short registerB_;
	static int zeroResultBit_;
	static int overFlowBit_;
public:
	void readInstructionsFromMemory();

};
#endif // !HARDWARE_H
