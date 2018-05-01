#ifndef DEC_H
#define DEC_H
#include "SAL.h"
#include "Hardware.h"
#include <iostream>
class DEC : public SAL
{
public:
	std::string symbol;
	void execute();
	std::string toString();
};
#endif // !DEC_H

