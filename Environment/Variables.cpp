#include "Variables.hpp"

std::map<std::string, Variable*> Variables::variablesTable = std::map<std::string, Variable*>();

void Variables::free()
{
    for (auto& variable : variablesTable)
    {
        if (variable.second)
        {
            delete variable.second;
        }
    }
}

Variable* Variables::get(const std::string& token)
{
    return variablesTable[token];
}

void Variables::set(const std::string& token, Variable* variable)
{
    variablesTable[token] = variable;
}
