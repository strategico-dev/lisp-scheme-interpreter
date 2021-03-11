#include "OperatorDefiner.hpp"

BaseOperator* OperatorDefiner::findByLexicalToken(const std::string& lexicalToken)
{
	BaseOperator* expressionOperator = nullptr;

	if (lexicalToken == "+")
	{
		expressionOperator = new Plus();
	}
	if (lexicalToken == "define")
	{
		expressionOperator = new Define();
	}

	return expressionOperator;
}
