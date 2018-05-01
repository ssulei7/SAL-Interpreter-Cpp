#include "ADD.h"

void ADD::execute()
{
	Hardware* hardware = Hardware::getInstance();
	hardware->registerA_ = hardware->registerA_ + hardware->registerB_;

	/*Check if there was a zero result bit*/
	if (hardware->registerA_ == 0)
	{
		hardware->zeroResultBit_ = 1;
	}
	else
	{
		hardware->zeroResultBit_ = 0;
	}

	/*Check if there was an overflow*/
	if (hardware->registerA_ > SHRT_MIN && hardware->registerA_ < SHRT_MAX)
	{
		hardware->overFlowBit_ = 0;
	}
	else
	{
		hardware->overFlowBit_ = 1;
		if (hardware->registerA_ < 0)
		{
			hardware->registerA_ += SHRT_MAX;
		}
		else
		{
			hardware->registerA_ += SHRT_MIN;
		}
	}

	hardware->PC += 1;
}

std::string ADD::toString()
{
	return "ADD";
}
