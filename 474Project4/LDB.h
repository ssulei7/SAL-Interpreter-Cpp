#ifndef LDA_H
#define LDA_H
#include "SAL.h"
#include "Hardware.h"
class LDA : public SAL
{
protected:
	char symbol_;
public:
	void execute();
};
#endif // !LDA_H
