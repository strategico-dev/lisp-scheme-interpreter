#pragma once

#include <Syntax/Operators/BaseOperator.hpp>

class Expression
{
private:
	BaseOperator* expressionOperator = nullptr;
	std::vector<std::string> operands;
public:
	Expression() {}
	Expression(BaseOperator*, const std::vector<std::string>&);
	~Expression();

	void setOperator(BaseOperator* expressionOperator);
	void setOperands(const std::vector<std::string>& operands);

	void execute();
};