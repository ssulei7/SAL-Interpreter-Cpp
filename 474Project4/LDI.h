#ifndef LDI_H
#define LDI_H
#include "SAL.h"
#include "Hardware.h"
class LDI : public SAL
{
public:
	long value;
	void execute();
	std::string toString();
};
#endif // !LDI_H
