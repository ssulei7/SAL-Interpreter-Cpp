#ifndef ST_H
#define ST_H
#include "SAL.h"
class ST : public SAL
{
protected:
	char symbol_;
public:
	void execute();
};
#endif // !ST_H
