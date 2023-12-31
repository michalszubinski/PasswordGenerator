#include "PasswordGenerator_Settings.h"


PasswordGenerator_Settings::PasswordGenerator_Settings()
{
    restoreDefaultSettings();
}

std::string PasswordGenerator_Settings::getAllowed()
{
    std::string allowed{};

    // add built-in character groups
    if (cg_lowerCharacters.allowed) allowed += cg_lowerCharacters.characterString;
    if (cg_upperCharacters.allowed) allowed += cg_upperCharacters.characterString;
    if (cg_numbers.allowed) allowed         += cg_numbers.characterString;
    if (cg_commonSymbols.allowed) allowed   += cg_commonSymbols.characterString;

    // add user-defined characters groups
    for (const auto& cg_charGroup : cg_userDefined) 
        if (cg_charGroup.allowed) allowed += cg_charGroup.characterString;

    // remove repeated characters groups
    allowed.erase(std::unique(allowed.begin(), allowed.end()), allowed.end());

    return allowed;
}

bool PasswordGenerator_Settings::checkIfRequirementsPossible()
{
    return true;
}

void PasswordGenerator_Settings::makeRequirementsPossible()
{
}

void PasswordGenerator_Settings::restoreDefaultSettings()
{
    // Built-in character groups - if allowed
    cg_lowerCharacters.allowed  = PasswordGenerator_Constants::BOOL_cg_lowerCharacters;
    cg_upperCharacters.allowed  = PasswordGenerator_Constants::BOOL_cg_upperCharacters;
    cg_numbers.allowed          = PasswordGenerator_Constants::BOOL_cg_numbers        ;
    cg_commonSymbols.allowed    = PasswordGenerator_Constants::BOOL_cg_commonSymbols  ;

    // Password length
    passwordLength = PasswordGenerator_Constants::INT_passwordLength;

    // Built-in character groups - characters
    cg_lowerCharacters.characterString  = PasswordGenerator_Constants::STR_cg_lowerCharacters  ;
    cg_upperCharacters.characterString  = PasswordGenerator_Constants::STR_cg_upperCharacters  ;
    cg_numbers.characterString          = PasswordGenerator_Constants::STR_cg_numbers          ;
    cg_commonSymbols.characterString    = PasswordGenerator_Constants::STR_cg_commonSymbols    ;

    // Built-in character groups - requirements
    cg_lowerCharacters.amountMinRequiredInPassword = PasswordGenerator_Constants::INT_req_lowerCharactersMinCount;
    cg_upperCharacters.amountMinRequiredInPassword = PasswordGenerator_Constants::INT_req_upperCharactersMinCount;
    cg_numbers.amountMinRequiredInPassword         = PasswordGenerator_Constants::INT_req_numberMinCount;
    cg_commonSymbols.amountMinRequiredInPassword   = PasswordGenerator_Constants::INT_req_commonSymbolsMinCount;

    cg_userDefined.clear();
}
