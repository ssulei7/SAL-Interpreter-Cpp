#include "SAL.h"
#include "ADD.h"
#include <iostream>


/*Function prototypes*/
void loadInstructionsToMemory();


int main()
{
	SAL* sal = new ADD;
	char userInput;
	sal->execute();
	std::cout << "Welcome to the SAL Interpreter for C++!" << std::endl;
	while (true)
	{
		std::cout << "Please enter a command: ";
		std::cin >> userInput;
		switch (userInput)
		{
		case 'q':
			exit(0);
		}
	}

}