#ifndef ST_H
#define ST_H
#include "SAL.h"
class ST : public SAL
{
public:
	std::string symbol;
	void execute();
};
#endif // !ST_H
