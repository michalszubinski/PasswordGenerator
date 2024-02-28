#include "PasswordGenerator.h"

std::string PasswordGenerator::generate()
{
    std::string password{};

    std::string allowedCharacters = _PasswordGenerator_Settings.getAllowed();

    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(1, allowedCharacters.length());

    do {
        password = "";
        while (password.length() != _PasswordGenerator_Settings.passwordLength) {
            password += allowedCharacters[uniform_dist(e1)];
        }
    } while (!checkIfPasswordAllowed(password));

    return password;
}

bool PasswordGenerator::checkIfPasswordAllowed(std::string password)
{
    if (!checkIfPasswordAllowedGroup(password, _PasswordGenerator_Settings.cg_lowerCharacters))  return false;
    if (!checkIfPasswordAllowedGroup(password, _PasswordGenerator_Settings.cg_upperCharacters))  return false;
    if (!checkIfPasswordAllowedGroup(password, _PasswordGenerator_Settings.cg_numbers)        )  return false;
    if (!checkIfPasswordAllowedGroup(password, _PasswordGenerator_Settings.cg_commonSymbols)  )  return false;

    for(auto userDefinedGroup : _PasswordGenerator_Settings.cg_userDefined)
        if (!checkIfPasswordAllowedGroup(password, userDefinedGroup))  return false;


    return true;
}

bool PasswordGenerator::checkIfPasswordAllowedGroup(std::string password, PasswordGenerator_CharGroup group)
{
    if (!group.allowed) return true;

    unsigned int letterCount = PasswordGenerator_Utils::countSpecificLetters(password, group.characterString);

    //if (letterCount > group.amountMaxInPassword) { std::cout << "Limit reached - group.allowed\n"; return false; }
    //if (letterCount <= group.amountRequiredInPassword) { std::cout << "Requirement not reached - group.amountRequiredInPassword\n"; return false; }
    if (letterCount > group.amountMaxInPassword) return false; 
    if (letterCount <= group.amountRequiredInPassword) return false;

    return true;
}
