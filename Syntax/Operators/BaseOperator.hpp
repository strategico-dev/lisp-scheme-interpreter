#pragma once

#include <string>
#include <vector>

class BaseOperator
{
private:
	std::string lexicalToken;
public:
	BaseOperator(const std::string&);
	virtual ~BaseOperator() {}

	std::string getLexicalToken();

	virtual void action(const std::vector<std::string>& operands) = 0;
};