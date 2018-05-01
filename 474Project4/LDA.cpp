#include "LDA.h"

void LDA::execute()
{
	Hardware* hardware = Hardware::getInstance();
	hardware->registerA_ = hardware->symbolTable[symbol];
	hardware->PC += 1;
}

std::string LDA::toString()
{
	return "LDA " + symbol;
}
