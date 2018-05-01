#ifndef ADD_H
#define ADD_H
#include "SAL.h"
#include "Hardware.h"
#include <limits>
#include <iostream>
class ADD : public SAL
{
public:
	void execute();
	std::string toString();

};
#endif // ADD_H
