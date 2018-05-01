#include "JMP.h"

void JMP::execute()
{
	Hardware* hardware = Hardware::getInstance();
	hardware->PC = number;
}

std::string JMP::toString()
{
	return "JMP " + std::to_string(number);
}
