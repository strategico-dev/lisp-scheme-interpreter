#pragma once

#include <string>
#include <vector>

class Stack
{
private:
	static std::vector<std::string> stack;
public:
	static std::string pop();
	static void push(const std::string& value);
};