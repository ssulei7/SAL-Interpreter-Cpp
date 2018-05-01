#ifndef JVS_H
#define JVS_H
#include "SAL.h"
#include "Hardware.h"
class JVS : public SAL
{
public:
	int number;
	void execute();
	std::string toString();
};
#endif // !JVS_H
