#include "Stack.hpp"

std::vector<std::string> Stack::stack = std::vector<std::string>();

std::string Stack::pop()
{
    std::string value = stack.back();
    
    stack.pop_back();
    
    return value;
}

void Stack::push(const std::string& value)
{
    stack.push_back(value);
}
