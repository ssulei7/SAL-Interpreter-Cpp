#include "ST.h"

void ST::execute()
{
	Hardware* hardware = Hardware::getInstance();
	hardware->symbolTable[symbol] = hardware->registerA_;
	hardware->PC += 1;
}

std::string ST::toString()
{
	return "ST " + symbol;
}
