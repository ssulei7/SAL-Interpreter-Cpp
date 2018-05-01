#include "XCH.h"

void XCH::execute()
{
	Hardware* hardware = Hardware::getInstance();
	short temp = short(hardware->registerA_);
	hardware->registerA_ = short(hardware->registerB_);
	hardware->registerB_ = temp;
	hardware->PC += 1;
}

std::string XCH::toString()
{
	return "XCH";
}
