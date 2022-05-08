#pragma once
#include <string>

extern const std::wstring WORDS[4];

extern const wchar_t PERMITTED_LETTERS[33];

bool isPermittedLetter(wchar_t letter);

std::wstring getWordWithRevealed(wchar_t letter, std::wstring word);

std::wstring getCombinedWords(std::wstring word1, std::wstring word2);

bool containsLetter(wchar_t letter, std::wstring str);