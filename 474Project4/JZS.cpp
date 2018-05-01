#include "JZS.h"

void JZS::execute()
{
	Hardware* hardware = Hardware::getInstance();
	if (hardware->zeroResultBit_ == 1)
	{
		hardware->PC = number;
	}
	else
	{
		hardware->PC += 1;
	}
}

std::string JZS::toString()
{
	return "JZS: " + std::to_string(number);
}
