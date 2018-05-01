#include "ADD.h"



bool checkIfOverflow(long num1, long num2)
{
	long result = num1 + num2;
	if (num1 > 0 && num2 > 0 && result < 0)
		return true;
	if (num1 < 0 && num2 < 0 && result > 0)
		return true;
	return false;
}

void ADD::execute()
{
	Hardware* hardware = Hardware::getInstance();

	/*Check overflow*/
	bool overflow = checkIfOverflow(hardware->registerA_, hardware->registerB_);
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
	if (!overflow)
	{
		hardware->overFlowBit_ = 0;
	}
	else
	{
		hardware->overFlowBit_ = 1;
		if (hardware->registerA_ < 0)
		{
			hardware->registerA_ += std::numeric_limits<long>::max();
		}
		else
		{
			hardware->registerA_ += std::numeric_limits<long>::min();
		}
	}

	hardware->PC += 1;
}

std::string ADD::toString()
{
	return "ADD";
}
