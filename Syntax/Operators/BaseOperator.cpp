#include "BaseOperator.hpp"

BaseOperator::BaseOperator(const std::string& lexicalToken) :
    lexicalToken(lexicalToken)
{

}

std::string BaseOperator::getLexicalToken()
{
    return lexicalToken;
}
