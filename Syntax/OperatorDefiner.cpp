#include "OperatorDefiner.hpp"

BaseOperator* OperatorDefiner::findByLexicalToken(const std::string& lexicalToken)
{
	BaseOperator* expressionOperator = nullptr;

	if (lexicalToken == "+")
	{
		expressionOperator = new Plus();
	}

	return expressionOperator;
}
