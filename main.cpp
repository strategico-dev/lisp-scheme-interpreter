#include <iostream>

#include <Environment/Stack.hpp>
#include <Parsers/LexicalParser.hpp>

int main()
{
	std::string command = "(+ 1 (+ (+ 1 1) (+ 1 1)))";
	LexicalParser lexicalParser;

	Expression* exp = new Expression();
	lexicalParser.parseCommand(command, exp);
	exp->execute();

	std::cout << Stack::pop() << std::endl;

	return 0;
}