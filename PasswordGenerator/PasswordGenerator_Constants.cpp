#include "PasswordGenerator_Constants.h"

// DEFAULT VALUES FOR SETTINGS
const std::string PasswordGenerator_Constants::STR_cg_lowerCharacters{ "abcdefghijklmnopqrstuvwxyz" };
const std::string PasswordGenerator_Constants::STR_cg_upperCharacters{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
const std::string PasswordGenerator_Constants::STR_cg_numbers{ "0123456789" };
const std::string PasswordGenerator_Constants::STR_cg_commonSymbols{ R"MSG( !"#$ % &'()*+,-./:;<=>?@[\]^_`{|}~")MSG" };

const int PasswordGenerator_Constants::INT_passwordLength = 8;

const bool PasswordGenerator_Constants::BOOL_cg_lowerCharacters = 1;
const bool PasswordGenerator_Constants::BOOL_cg_upperCharacters = 1;
const bool PasswordGenerator_Constants::BOOL_cg_numbers = 1;
const bool PasswordGenerator_Constants::BOOL_cg_commonSymbols = 1;

// Password requirements
const int PasswordGenerator_Constants::INT_req_lowerCharactersMinCount = 1;
const int PasswordGenerator_Constants::INT_req_upperCharactersMinCount = 1;
const int PasswordGenerator_Constants::INT_req_numberMinCount = 1;
const int PasswordGenerator_Constants::INT_req_commonSymbolsMinCount	   = 1;