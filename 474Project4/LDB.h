#ifndef LDB_H
#define LDB_H
#include "SAL.h"
#include "Hardware.h"
class LDB : public SAL
{
public:
	std::string symbol;
	void execute();
	std::string toString();
};
#endif // !LDA_H
