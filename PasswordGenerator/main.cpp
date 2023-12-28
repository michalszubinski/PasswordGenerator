#include "PasswordGenerator_Libraries.h"
#include "PasswordGenerator.h"

int main()
{
	PasswordGenerator test;

	for(unsigned int i = 0; i < 100; ++i)
		std::cout << test.generate() << std::endl;
}