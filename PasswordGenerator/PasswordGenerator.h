#pragma once
#include "PasswordGenerator_Settings.h"
#include "PasswordGenerator_Libraries.h"
#include "PasswordGenerator_Utils.h"

class PasswordGenerator {
public: // for testing purposes everything is public
	PasswordGenerator_Settings _PasswordGenerator_Settings;
	std::string password;

// public:
	std::string generate();
	bool checkIfPasswordAllowed(std::string password); // TODO
	bool checkIfPasswordAllowedGroup(std::string password, PasswordGenerator_CharGroup group);

};