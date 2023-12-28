#pragma once
#include "PasswordGenerator_Libraries.h"

// " !"#$%&'()*+,-./:;<=>?@[\]^_`{|}~"

struct PasswordGenerator_Settings {
	// group of symbols allowed
	bool allowLowerCharacters;
	bool allowUpperCharacters;
	bool allowNumbers;
	bool allowCommonSymbols;

	int passwordLength;

	// TODO: REQUIREMENTS
	int lowerCharactersMinCount;
	int upperCharactersMinCount;
	int numberMinCount;
	int commonSymbolsMinCount;

	// TODO: Special groups
	// TODO: Symbol change
	// TODO: Weighted symbols
	// TODO: Words from dictionary


	// methods
	PasswordGenerator_Settings(); 
	std::string getAllowed(); 
	bool checkIfRequirementsPossible(); // TODO
	void makeRequirementsPossible(); // TODO
};