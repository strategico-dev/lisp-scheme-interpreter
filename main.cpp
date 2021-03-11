#include <iostream>

#include <Environment/Stack.hpp>
#include <Parsers/LexicalParser.hpp>
#include <Environment/Variables.hpp>

int main()
{
	std::string commandVar = "(define x 1)";
	std::string commandPlus = "(+ x x)";

	LexicalParser lexicalParser;

	Expression* expVar = new Expression();
	Expression* expPlus = new Expression();

	lexicalParser.parseCommand(commandVar, expVar);
	expVar->execute();

	lexicalParser.parseCommand(commandPlus, expPlus);
	expPlus->execute();
	
	std::cout << Stack::pop() << std::endl;

	Variables::free();

	delete expVar;
	delete expPlus;

	return 0;
}