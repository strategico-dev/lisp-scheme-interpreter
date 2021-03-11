#include "Variable.hpp"

Variable::Variable(const std::string& value) :
	value(value)
{

}

std::string Variable::getValue()
{
	return value;
}

void Variable::setValue(const std::string& value)
{
	this->value = value;
}
