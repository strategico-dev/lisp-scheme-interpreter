#pragma once

#include <Syntax/Operators/Plus.hpp>
#include <Syntax/Operators/Minus.hpp>
#include <Syntax/Operators/Define.hpp>
#include <Syntax/Operators/BaseOperator.hpp>
#include <Syntax/Operators/Multiplication.hpp>

class OperatorDefiner
{
public:
	static BaseOperator* findByLexicalToken(const std::string& lexicalToken);
};