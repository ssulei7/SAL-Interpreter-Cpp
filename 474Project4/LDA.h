#ifndef LDA_H
#define LDA_H
#include "SAL.h"
#include "Hardware.h"
class LDA : public SAL
{
public:
	std::string symbol;
	void execute();
};
#endif // !LDA_H
