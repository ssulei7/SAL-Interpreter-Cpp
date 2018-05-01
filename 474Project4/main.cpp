#include "SAL.h"
#include "ADD.h"
#include "Hardware.h"
#include <iostream>

/*Function prototypes*/
void executeOneInstruction();
void executeAllInstructions();
void saveStateToFile();

int main()
{
	Hardware myHardware;
	/*Test method...*/
	char userInput;
	std::cout << "Welcome to the SAL Interpreter for C++!" << std::endl;
	while (true)
	{
		std::cout << "Please enter a command: ";
		std::cin >> userInput;
		switch (userInput)
		{
		case 'q':
			exit(0);
		case 'r':
			break;
		case 'd':
			break;
		case 's':
			break;
		case 'i':
			myHardware.readInstructionsFromMemory();
			break;
		}

		for (int i = 0; i < myHardware.numInstruction; i++)
		{
			myHardware.pcMemory[i]->execute();
		}
	}

}