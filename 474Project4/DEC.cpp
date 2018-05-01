#include "DEC.h"

void DEC::execute()
{
	Hardware* hardware = Hardware::getInstance();
	hardware->symbolTable[symbol] = 0;
	hardware->PC += 1;
}
