#pragma once
#include "PasswordGenerator_Libraries.h"

struct PasswordGenerator_Constants {
    // Default values for Settings
    // 
    // Default character group's characters
    static const std::string STR_cg_lowerCharacters;
    static const std::string STR_cg_upperCharacters;
    static const std::string STR_cg_numbers        ;
    static const std::string STR_cg_commonSymbols  ;

    // Password Length
    static const int INT_passwordLength;

    // Allowed character groups
    static const bool BOOL_cg_lowerCharacters   ;
    static const bool BOOL_cg_upperCharacters   ;
    static const bool BOOL_cg_numbers           ;
    static const bool BOOL_cg_commonSymbols     ;

    // Password requirements
    static const int INT_req_lowerCharactersMinCount;
    static const int INT_req_upperCharactersMinCount;
    static const int INT_req_numberMinCount;
    static const int INT_req_commonSymbolsMinCount;

};
