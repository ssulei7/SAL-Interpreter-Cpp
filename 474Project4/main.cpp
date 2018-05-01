#include "SAL.h"
#include "ADD.h"
#include "Hardware.h"
#include <iostream>

/*Reference static variables*/

/*Function prototypes*/
void executeOneInstruction();
void executeAllInstructions();
void storeStateOfMemory();


void executeOneInstruction()
{
	Hardware* hardware = Hardware::getInstance();
	if (hardware->halted_ == false)
	{
		hardware->pcMemory[hardware->PC]->execute();
	}
}

void executeAllInstructions()
{
	Hardware* hardware = Hardware::getInstance();
	while (hardware->halted_ != true)
	{
		hardware->pcMemory[hardware->PC]->execute();
	}

	std::cout << "All instructions are executed!" << std::endl;
}

void storeStateOfMemory()
{
	Hardware* hardware = Hardware::getInstance();
	std::ofstream outputfile("output.txt");
	outputfile << "PC: " << std::to_string(hardware->PC) << std::endl;
	outputfile << "Register A: " << std::to_string(hardware->registerA_) << std::endl;
	outputfile << "Register B: " << std::to_string(hardware->registerB_) << std::endl;
	outputfile << "Zero Result Bit: " << std::to_string(hardware->zeroResultBit_) << std::endl;
	outputfile << "OverFlow Bit: " << std::to_string(hardware->overFlowBit_) << std::endl;
	outputfile << "****INSTRUCTIONS BELOW****" << std::endl;
	for (int i = 0; i < hardware->numInstruction; i++)
	{
		outputfile << "Address " << std::to_string(i) << " --> " <<  hardware->pcMemory[i]->toString() << std::endl;
	}
}

int main()
{
	/*Test method...*/
	char userInput;
	std::cout << "Welcome to the SAL Interpreter for C++!" << std::endl;
	while (true)
	{
		Hardware* myHardware = Hardware::getInstance();
		std::cout << "Please enter a command: ";
		std::cin >> userInput;
		switch (userInput)
		{
		case 'q':
			exit(0);
		case 'r':
			executeAllInstructions();
			break;
		case 'd':
			executeOneInstruction();
			break;
		case 's':
			storeStateOfMemory();
			break;
		case 'i':
			myHardware->readInstructionsFromMemory();
			break;
		}


	}

}