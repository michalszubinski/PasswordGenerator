#include "PasswordGenerator_Settings.h"

PasswordGenerator_Settings::PasswordGenerator_Settings()
{
    allowLowerCharacters = 1;
    allowUpperCharacters = 1;
    allowNumbers = 1;
    allowCommonSymbols = 1;
    
    passwordLength = 8;
}

std::string PasswordGenerator_Settings::getAllowed()
{
    std::string allowed{};

    if (allowLowerCharacters) allowed += "abcdefghijklmnopqrstuvwxyz";
    if (allowUpperCharacters) allowed += "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if (allowNumbers) allowed += "0123456789";
    if (allowCommonSymbols) allowed += R"MSG( !"#$ % &'()*+,-./:;<=>?@[\]^_`{|}~")MSG";

    return allowed;
}

bool PasswordGenerator_Settings::checkIfRequirementsPossible()
{
    return true;
}

void PasswordGenerator_Settings::makeRequirementsPossible()
{
}
