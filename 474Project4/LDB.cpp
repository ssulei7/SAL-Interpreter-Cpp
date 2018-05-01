#include "LDB.h"

void LDB::execute()
{
	Hardware* hardware = Hardware::getInstance();
	hardware->registerB_ = hardware->symbolTable[symbol];
	hardware->PC += 1;
}

std::string LDB::toString()
{
	return "LDB " + symbol;
}