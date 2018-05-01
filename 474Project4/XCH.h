#ifndef XCH_H
#define XCH_H
#include "SAL.h"
#include "Hardware.h"
#include <iostream>
class XCH : public SAL
{
public:
	void execute();
	std::string toString();
};
#endif // !XCH_H
