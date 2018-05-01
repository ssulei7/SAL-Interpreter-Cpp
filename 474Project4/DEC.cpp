#include "DEC.h"

void DEC::execute()
{
	Hardware* hardware = Hardware::getInstance();
	hardware->symbolTable[symbol] = 0;
	hardware->PC += 1;
}

std::string DEC::toString()
{
	Hardware* hardware = Hardware::getInstance();
	short value = hardware->symbolTable[symbol];
	std::string returnString = "DEC: " + symbol + " Value stored at this Address: " + std::to_string(value);
	return returnString;
}
