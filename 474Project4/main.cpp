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
			break;
		case 'i':
			myHardware->readInstructionsFromMemory();
			break;
		}


	}

}