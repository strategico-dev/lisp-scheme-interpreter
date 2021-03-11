#pragma once

#include <string>

class Variable
{
private:
	std::string value;
public:
	Variable(const std::string&);

	std::string getValue();
	void setValue(const std::string& value);
};