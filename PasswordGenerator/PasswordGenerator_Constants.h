#pragma once
#include "PasswordGenerator_Libraries.h"

struct PasswordGenerator_Constants {
    // Default character group's characters
    static const std::string STR_cg_lowerCharacters;
    static const std::string STR_cg_upperCharacters;
    static const std::string STR_cg_numbers        ;
    static const std::string STR_cg_commonSymbols  ;
};

const std::string PasswordGenerator_Constants::STR_cg_lowerCharacters{ "abcdefghijklmnopqrstuvwxyz" };
const std::string PasswordGenerator_Constants::STR_cg_upperCharacters{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
const std::string PasswordGenerator_Constants::STR_cg_numbers{ "0123456789" };
const std::string PasswordGenerator_Constants::STR_cg_commonSymbols{ R"MSG( !"#$ % &'()*+,-./:;<=>?@[\]^_`{|}~")MSG" };