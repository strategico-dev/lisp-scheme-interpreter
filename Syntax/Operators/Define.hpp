#pragma once

#include <iostream>
#include <Environment/Variables.hpp>
#include <Syntax/Operators/BaseOperator.hpp>

class Define : public BaseOperator
{
public:
	Define();
	virtual ~Define() {}

	virtual void action(const std::vector<std::string>& operands) override;
};