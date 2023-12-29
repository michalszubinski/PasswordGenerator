#pragma once
#include "PasswordGenerator_Libraries.h"

struct PasswordGenerator_CharGroup {
	bool allowed;
	std::string characterString;

	PasswordGenerator_CharGroup() = default;
	PasswordGenerator_CharGroup(bool argAllowed, std::string argCharacterString) : allowed(argAllowed), characterString(argCharacterString) {

	}
};