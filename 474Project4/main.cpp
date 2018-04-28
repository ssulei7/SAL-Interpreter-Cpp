#include "SAL.h"
#include "ADD.h"
#include <iostream>


/*Function prototypes*/
void loadInstructionsToMemory();


int main()
{
	SAL* sal = new ADD;
	sal->execute();
	std::cout << "Hello world!" << std::endl;
}