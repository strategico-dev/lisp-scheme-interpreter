#include "OperatorDefiner.hpp"

BaseOperator* OperatorDefiner::findByLexicalToken(const std::string& lexicalToken)
{
	BaseOperator* expressionOperator = nullptr;

	if (lexicalToken == "+")
	{
		expressionOperator = new Plus();
	}
	if (lexicalToken == "-")
	{
		expressionOperator = new Minus();
	}
	if (lexicalToken == "*")
	{
		expressionOperator = new Multiplication();
	}
	if (lexicalToken == "define")
	{
		expressionOperator = new Define();
	}

	return expressionOperator;
}
