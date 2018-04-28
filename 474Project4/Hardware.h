#ifndef HARDWARE_H
#define HARDWARE_H
#include <fstream>
#include <vector>
#include <sstream>
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
	static short int PC;
	static SAL** pcMemory;
	static std::map<std::string, int> symbolTable;
	static short registerA_;
	static short registerB_;
	static int zeroResultBit_;
	static int overFlowBit_;
	static bool halted_;
	static int numInstruction;
	void readInstructionsFromMemory();
private:
	void createInstruction(int lineNum, std::string instruction, std::string arg);
};
#endif // !HARDWARE_H
