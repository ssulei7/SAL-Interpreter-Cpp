#ifndef HARDWARE_H
#define HARDWARE_H
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include "SAL.h"
#include "ADD.h"
#include "DEC.h"
#include "HLT.h"
#include "JMP.h"
#include "JVS.h"
#include "LDA.h"
#include "LDB.h"
#include "LDI.h"
#include "ST.h"
#include "XCH.h"
#include "JZS.h"
#include <map>
class Hardware
{

public:
	short int PC;
	SAL** pcMemory;
	std::map<std::string, short> symbolTable;
	short registerA_;
	short registerB_;
	int zeroResultBit_;
	int overFlowBit_;
	bool halted_;
	int numInstruction;
	void readInstructionsFromMemory();
	static Hardware* getInstance();
private:
	static Hardware* instance;
	void createInstruction(int lineNum, std::string instruction, std::string arg);
	Hardware();
};
#endif // !HARDWARE_H
