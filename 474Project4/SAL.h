#ifndef SAL_H
#define SAL_H
#include <string>
#include <iostream>
class SAL
{
public:
	void virtual execute() = 0;
	std::string virtual toString() = 0;
};
#endif
