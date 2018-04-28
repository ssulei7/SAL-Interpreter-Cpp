#ifndef LDI_H
#define LDI_H
#include "SAL.h"
#include "Hardware.h"
class LDI : public SAL
{
protected:
	short value_;
public:
	void execute();
};
#endif // !LDI_H
