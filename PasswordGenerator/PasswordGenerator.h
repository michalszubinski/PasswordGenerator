#pragma once
#include "PasswordGenerator_Settings.h"
#include "PasswordGenerator_Libraries.h"

class PasswordGenerator {
public: // for testing purposes everything is public
	PasswordGenerator_Settings _PasswordGenerator_Settings;
	std::string password;

// public:
	std::string generate();
	bool checkRequirements(); // TODO

};