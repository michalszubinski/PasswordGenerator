#pragma once
#include "PasswordGenerator_Libraries.h"
#include "PasswordGenerator_Constants.h"

struct PasswordGenerator_CharGroup {
	bool allowed;
	std::string characterString;
	int amountRequiredInPassword;
	int amountMaxInPassword;

	PasswordGenerator_CharGroup() = default;

	PasswordGenerator_CharGroup(std::string argCharacterString) : characterString(argCharacterString) {
		allowed = 1;
		amountRequiredInPassword = 1;
		amountMaxInPassword = 1;
	}

	PasswordGenerator_CharGroup(bool argAllowed, std::string argCharacterString) : allowed(argAllowed), characterString(argCharacterString) {
		amountRequiredInPassword = 1;
		amountMaxInPassword = 1;
	}

	PasswordGenerator_CharGroup(bool argAllowed, std::string argCharacterString, int argRequired, int argMax) : allowed(argAllowed), characterString(argCharacterString), amountRequiredInPassword(argRequired), amountMaxInPassword(argMax) {

	}
};