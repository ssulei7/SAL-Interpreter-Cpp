#include "Hardware.h"

SAL** Hardware::pcMemory;
int Hardware::numInstruction;

void Hardware::readInstructionsFromMemory()
{
	std::ifstream file("input.sal");
	
	/*Read number of instructions and create appropriate memory size*/
	int size = 0;
	std::string line;
	getline(file, line);
	size = stoi(line);
	numInstruction = size;

	pcMemory = new SAL*[size];

	/*Now read instructions lines by line*/
	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		int lineNum;
		std::string instruction;
		std::string parameter;
		ss >> lineNum;
		ss >> instruction;
		ss >> parameter;
		createInstruction(lineNum, instruction, parameter);
	}

	file.close();
}

void Hardware::createInstruction(int lineNum, std::string instruction, std::string arg)
{
	if (instruction == "ADD")
	{
		ADD* add = new ADD;
		pcMemory[lineNum] = add;
	}
	else if (instruction == "DEC")
	{
		DEC* dec = new DEC;
		dec->symbol = arg;
		pcMemory[lineNum] = dec;
	}
	else if (instruction == "HLT")
	{
		HLT* hlt = new HLT;
		pcMemory[lineNum] = hlt;
	}
	else if (instruction == "JMP")
	{
		JMP* jmp = new JMP;
		jmp->number = stoi(arg);
		pcMemory[lineNum] = jmp;
	}
	else if (instruction == "JVS")
	{
		JVS* jvs = new JVS;
		jvs->number = stoi(arg);
		pcMemory[lineNum] = jvs;
	}
	else if (instruction == "JZS")
	{
		JZS* jzs = new JZS;
		jzs->number = stoi(arg);
		pcMemory[lineNum] = jzs;
	}
	else if (instruction == "LDA")
	{
		LDA* lda = new LDA;
		lda->symbol = arg;
		pcMemory[lineNum] = lda;
	}
	else if (instruction == "LDB")
	{
		LDB* ldb = new LDB;
		ldb->symbol = arg;
		pcMemory[lineNum] = ldb;
	}
	else if (instruction == "LDI")
	{
		LDI* ldi = new LDI;
		ldi->value = (short)stoi(arg);
		pcMemory[lineNum] = ldi;
	}
	else if (instruction == "ST")
	{
		ST* st = new ST;
		st->symbol = arg;
		pcMemory[lineNum] = st;
	}
	else if (instruction == "XCH")
	{
		XCH* xch = new XCH;
		pcMemory[lineNum] = xch;
	}
}
