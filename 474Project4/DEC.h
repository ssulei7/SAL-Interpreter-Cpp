#ifndef DEC_H
#define DEC_H
#include "SAL.h"
#include "Hardware.h"
class DEC : public SAL
{
protected:
	char symbol_;
public:
	void execute();
};
#endif // !DEC_H

