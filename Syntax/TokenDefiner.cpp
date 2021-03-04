#include "TokenDefiner.hpp"

bool TokenDefiner::isIgnoreToken(char symbol)
{
    static std::vector<char> ignore = {' '};
   

    return std::find(ignore.begin(), ignore.end(), symbol) != ignore.end();
}

bool TokenDefiner::isSeparator(char symbol)
{
    static std::vector<char> separators = { ' ', ')' };

    return std::find(separators.begin(), separators.end(), symbol) != separators.end();
}

bool TokenDefiner::isOpenTag(char symbol)
{
    return symbol == '(';
}

bool TokenDefiner::isCloseTag(char symbol)
{
    return symbol == ')';
}
