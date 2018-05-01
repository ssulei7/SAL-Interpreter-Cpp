#include "JVS.h"

void JVS::execute()
{
	Hardware* hardware = Hardware::getInstance();
	if (hardware->overFlowBit_ == 1)
	{
		hardware->PC = number;
	}
	else
	{
		hardware->PC += 1;
	}
}

std::string JVS::toString()
{
	return "JVS " + std::to_string(number);
}
