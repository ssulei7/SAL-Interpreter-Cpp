#ifndef HLT_H
#define HLT_H
#include "SAL.h"
#include "Hardware.h"
class HLT : public SAL
{
public:
	void execute();
	std::string toString();
};
#endif // !HLT_H
