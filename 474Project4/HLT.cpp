#include "HLT.h"

void HLT::execute()
{
	Hardware* hardware = Hardware::getInstance();
	hardware->halted_ = true;
}

std::string HLT::toString()
{
	return "HLT";
}