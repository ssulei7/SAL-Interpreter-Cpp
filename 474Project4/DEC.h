#ifndef DEC_H
#define DEC_H
#include "SAL.h"
#include "Hardware.h"
class DEC : public SAL
{
public:
	std::string symbol;
	void execute();
};
#endif // !DEC_H

