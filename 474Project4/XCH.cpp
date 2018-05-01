#include "XCH.h"

void XCH::execute()
{
	Hardware* hardware = Hardware::getInstance();
	long temp = long(hardware->registerA_);
	hardware->registerA_ = long(hardware->registerB_);
	hardware->registerB_ = temp;
	hardware->PC += 1;
}

std::string XCH::toString()
{
	return "XCH";
}
