#ifndef JMP_H
#define	JMP_H
#include "SAL.h"
#include "Hardware.h"
class JMP : public SAL
{
public:
	int number;
	void execute();
};
#endif // !JMP_H
