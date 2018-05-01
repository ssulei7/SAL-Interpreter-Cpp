#ifndef JMP_H
#define	JMP_H
#include "SAL.h"
#include "Hardware.h"
#include <iostream>
class JMP : public SAL
{
public:
	int number;
	void execute();
	std::string toString();
};
#endif // !JMP_H
