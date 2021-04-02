#include "Minus.hpp"

Minus::Minus() : BaseOperator("-")
{
}

void Minus::action(const std::vector<std::string>& operands)
{
	int result = std::stoi(operands.front());

	for (int i = 1; i < operands.size(); i++)
	{
		result -= std::stoi(operands[i]);
	}

	Stack::push(std::to_string(result));
}
