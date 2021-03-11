#include "Define.hpp"

Define::Define() : BaseOperator("define")
{

}

void Define::action(const std::vector<std::string>& operands)
{
	Variable* variable = new Variable(operands.back());
	Variables::set(operands.front(), variable);
}
