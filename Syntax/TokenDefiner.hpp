#pragma once

#include <vector>
#include <algorithm>

class TokenDefiner
{
public:
	static bool isIgnoreToken(char symbol);

	static bool isSeparator(char symbol);

	static bool isOpenTag(char symbol);
	static bool isCloseTag(char symbol);
};