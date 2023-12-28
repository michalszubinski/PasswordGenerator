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
    } while (!checkRequirements());

    return password;
}

bool PasswordGenerator::checkRequirements()
{
    return true;
}
