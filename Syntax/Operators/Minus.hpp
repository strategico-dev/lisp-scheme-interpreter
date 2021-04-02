#pragma once

#include <Environment/Stack.hpp>
#include <Syntax/Operators/BaseOperator.hpp>

class Minus : public BaseOperator
{
public:
	Minus();
	virtual ~Minus() {}
	
	virtual void action(const std::vector<std::string>& operands) override;
};