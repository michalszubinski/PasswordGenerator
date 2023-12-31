#pragma once
#include "PasswordGenerator_Libraries.h"
#include "PasswordGenerator_Constants.h"

struct PasswordGenerator_CharGroup {
	bool allowed;
	std::string characterString;
	int amountMinRequiredInPassword;

	PasswordGenerator_CharGroup() = default;

	PasswordGenerator_CharGroup(std::string argCharacterString) : characterString(argCharacterString) {
		allowed = 1;
		amountMinRequiredInPassword = 1;
	}

	PasswordGenerator_CharGroup(bool argAllowed, std::string argCharacterString) : allowed(argAllowed), characterString(argCharacterString) {
		amountMinRequiredInPassword = 1;
	}

	PasswordGenerator_CharGroup(bool argAllowed, std::string argCharacterString, int argRequired) : allowed(argAllowed), characterString(argCharacterString), amountMinRequiredInPassword(argRequired) {

	}
};