#include "PasswordGenerator_Libraries.h"
#include "PasswordGenerator.h"

void testGenerate10PasswordsWithDefaultSettings() {
	PasswordGenerator test;

	test._PasswordGenerator_Settings.cg_commonSymbols.allowed = 0;

	for (unsigned int i = 0; i < 10; ++i)
		std::cout << test.generate() << std::endl;
}

void testGeneratePasswordWithDefaultSettings() {
	PasswordGenerator test;


	std::cout << test.generate() << std::endl;
}

void testGenerate20PasswordsWithCharacterGroups() {
	PasswordGenerator test;

	test._PasswordGenerator_Settings.cg_commonSymbols.allowed = 0;

	test._PasswordGenerator_Settings.cg_userDefined.push_back(PasswordGenerator_CharGroup(1, "!@#$"));
	test._PasswordGenerator_Settings.cg_userDefined.push_back(PasswordGenerator_CharGroup(1, "____________________________________________________________________________________________________________"));
	test._PasswordGenerator_Settings.cg_userDefined.push_back(PasswordGenerator_CharGroup(0, "%^&*()"));

	for (unsigned int i = 0; i < 20; ++i)
		std::cout << test.generate() << std::endl;
}




// MAIN ***********************************************************************************************************
int main()
{
	testGeneratePasswordWithDefaultSettings();
	//testGenerate20PasswordsWithCharacterGroups();
}

