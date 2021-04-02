#pragma once

#include <Environment/Stack.hpp>
#include <Syntax/Operators/BaseOperator.hpp>

class Multiplication : public BaseOperator
{
public:
	Multiplication();
	virtual ~Multiplication() {}

	virtual void action(const std::vector<std::string>& operands) override;
};