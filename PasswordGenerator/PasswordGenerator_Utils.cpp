#include "PasswordGenerator_Utils.h"

unsigned int PasswordGenerator_Utils::countSpecificLetters(const std::string text, const std::string letters)
{
    size_t count = std::count_if(text.begin(), text.end(), [&letters](char c) 
        {
            for (auto l : letters) {
                if (c == l) return true;
            }
            return false;
        });
    return static_cast<unsigned int>(count);
}
