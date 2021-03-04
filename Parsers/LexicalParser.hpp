#pragma once

#include <Environment/Stack.hpp>
#include <Syntax/Expression.hpp>
#include <Syntax/TokenDefiner.hpp>
#include <Syntax/OperatorDefiner.hpp>

class LexicalParser
{
public:
	int parseCommand(const std::string& command, Expression* expression, int start = 0);
};