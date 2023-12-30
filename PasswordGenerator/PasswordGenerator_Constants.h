#pragma once
#include "PasswordGenerator_Libraries.h"

static struct PasswordGenerator_Constants {
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

};
// DEFAULT VALUES FOR SETTINGS
const std::string PasswordGenerator_Constants::STR_cg_lowerCharacters{ "abcdefghijklmnopqrstuvwxyz" };
const std::string PasswordGenerator_Constants::STR_cg_upperCharacters{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
const std::string PasswordGenerator_Constants::STR_cg_numbers{ "0123456789" };
const std::string PasswordGenerator_Constants::STR_cg_commonSymbols{ R"MSG( !"#$ % &'()*+,-./:;<=>?@[\]^_`{|}~")MSG" };

const int INT_passwordLength = 8;

static const bool BOOL_cg_lowerCharacters   = 1;
static const bool BOOL_cg_upperCharacters   = 1;
static const bool BOOL_cg_numbers           = 1;
static const bool BOOL_cg_commonSymbols     = 1;