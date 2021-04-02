#pragma once

#include <Environment/Stack.hpp>
#include <Syntax/Operators/BaseOperator.hpp>

class Plus : public BaseOperator
{
public:
	Plus();
	virtual ~Plus() {}

	virtual void action(const std::vector<std::string>& operands) override;
};