#ifndef ST_H
#define ST_H
#include "SAL.h"
#include <iostream>
#include "Hardware.h"
class ST : public SAL
{
public:
	std::string symbol;
	void execute();
	std::string toString();
};
#endif // !ST_H
