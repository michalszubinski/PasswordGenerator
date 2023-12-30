#pragma once
#include "PasswordGenerator_Libraries.h"
#include "PasswordGenerator_CharGroup.h"
#include "PasswordGenerator_Constants.h"

struct PasswordGenerator_Settings {
	// Built-in character groups
	PasswordGenerator_CharGroup cg_lowerCharacters;
	PasswordGenerator_CharGroup cg_upperCharacters;
	PasswordGenerator_CharGroup cg_numbers;
	PasswordGenerator_CharGroup cg_commonSymbols;

	int passwordLength;

	// TODO: REQUIREMENTS
	int lowerCharactersMinCount;
	int upperCharactersMinCount;
	int numberMinCount;
	int commonSymbolsMinCount;

	// User-defined character groups
	std::vector<PasswordGenerator_CharGroup> cg_userDefined;

	// TODO: Words from dictionary
	// TODO: Symbol change when using dictionary
	// TODO: Weighted symbols


	// methods
	PasswordGenerator_Settings(); 
	std::string getAllowed(); 
	bool checkIfRequirementsPossible(); // TODO
	void makeRequirementsPossible(); // TODO
	void restoreDefaultSettings();
};