#ifndef ST_H
#define ST_H
#include "SAL.h"
#include <iostream>
class ST : public SAL
{
public:
	std::string symbol;
	void execute();
};
#endif // !ST_H
