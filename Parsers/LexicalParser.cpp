#include "LexicalParser.hpp"

int LexicalParser::parseCommand(const std::string& command, Expression* expression, int start)
{
    int i = start;
    int j = 0;
    std::string expressionOperator;
    std::vector<std::string> operands;
    bool foundOpenTag = false;
    bool foundOperator = false;

    while (i < command.length())
    {
        j++;
        if (TokenDefiner::isOpenTag(command[i]))
        {
            if (!foundOpenTag)
            {
                foundOpenTag = true;
            }
            else
            {
                Expression* subExpression = new Expression();
                i += parseCommand(command, subExpression, i);
                subExpression->execute();
                delete subExpression;

                operands.push_back(Stack::pop());
            }
            i++;
            continue;
        }

        if (TokenDefiner::isCloseTag(command[i]))
        {
            i++;
            break;
        }

        if (TokenDefiner::isIgnoreToken(command[i]))
        {
            i++;
            continue;
        }

        if (!foundOperator)
        {
            while (!TokenDefiner::isSeparator(command[i]))
            {
                expressionOperator += command[i++];
            }

            foundOperator = true;
            continue;
        }

        std::string operand = std::string();
        while (!TokenDefiner::isSeparator(command[i]))
        {
            operand += command[i++];
        }
        operands.push_back(operand);
    }

    expression->setOperator(OperatorDefiner::findByLexicalToken(expressionOperator));
    expression->setOperands(operands);

    return j;
}
