#include "Plus.hpp"

Plus::Plus() : BaseOperator("+")
{

}

void Plus::action(const std::vector<std::string>& operands)
{
	int result = 0;

	for (auto operand : operands)
	{
		result += std::stoi(operand);
	}

	Stack::push(std::to_string(result));
}
