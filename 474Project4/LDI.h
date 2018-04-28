#ifndef LDI_H
#define LDI_H
#include "SAL.h"
#include "Hardware.h"
class LDI : public SAL
{
public:
	short value;
	void execute();
};
#endif // !LDI_H
