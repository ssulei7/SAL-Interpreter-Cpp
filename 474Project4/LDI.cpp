#include "LDI.h"

void LDI::execute()
{
	Hardware* hardware = Hardware::getInstance();
	hardware->registerA_ = value;
	hardware->PC += 1;
}
