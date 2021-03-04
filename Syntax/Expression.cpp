#include "Expression.hpp"

Expression::Expression(BaseOperator* expressionOperator, const std::vector<std::string>& operands) :
	expressionOperator(expressionOperator),
	operands(operands)
{

}

Expression::~Expression()
{
	if (expressionOperator)
	{
		delete expressionOperator;
	}
}

void Expression::setOperator(BaseOperator* expressionOperator)
{
	if (this->expressionOperator)
	{
		delete this->expressionOperator;
	}

	this->expressionOperator = expressionOperator;
}

void Expression::setOperands(const std::vector<std::string>& operands)
{
	this->operands = operands;
}

void Expression::execute()
{
	expressionOperator->action(operands);
}
