#include "Multiplication.hpp"

Multiplication::Multiplication() : BaseOperator("*")
{

}

void Multiplication::action(const std::vector<std::string>& operands)
{
	int result = 1;

	for (auto operand : operands)
	{
		result *= std::stoi(operand);
	}

	Stack::push(std::to_string(result));
}
