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
        if (TokenDefiner::isOpenTag(command[i]))
        {
            if (!foundOpenTag)
            {
                foundOpenTag = true;
                j++;
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
            j++;
            break;
        }

        if (TokenDefiner::isIgnoreToken(command[i]))
        {
            i++;
            j++;
            continue;
        }

        if (!foundOperator)
        {
            while (!TokenDefiner::isSeparator(command[i]))
            {
                expressionOperator += command[i++];
                j++;
            }

            foundOperator = true;
            continue;
        }

        std::string operand = std::string();
        while (!TokenDefiner::isSeparator(command[i]))
        {
            operand += command[i++];
            j++;
        }

        if (Variables::get(operand))
        {
            operands.push_back(Variables::get(operand)->getValue());
        }
        else
        {
            operands.push_back(operand);
        }
    }

    expression->setOperator(OperatorDefiner::findByLexicalToken(expressionOperator));
    expression->setOperands(operands);

    return j;
}
