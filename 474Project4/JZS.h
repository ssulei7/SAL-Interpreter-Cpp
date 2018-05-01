#ifndef JZS_H
#define JZS_H
#include "SAL.h"
#include "Hardware.h"
class JZS : public SAL
{
public:
	int number;
	void execute();
	std::string toString();
};
#endif // !JZS_H
