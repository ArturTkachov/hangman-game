#pragma once
#include <string>

extern std::wstring words[4];

extern wchar_t permittedLetters[33];

std::wstring getWordWithRevealed(std::wstring revealString, std::wstring word);

std::wstring getCombinedWords(std::wstring word1, std::wstring word2);

bool containsLetter(std::wstring substr, std::wstring str);