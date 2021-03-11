#pragma once

#include <map>

#include <Environment/Variable.hpp>

class Variables
{
private:
	static std::map<std::string, Variable*> variablesTable;
public:
	static void free();

	static Variable* get(const std::string& token);
	static void set(const std::string& token, Variable* variable);
};