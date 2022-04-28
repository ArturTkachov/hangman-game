#include "GameLogic.h"
#include <string>

std::wstring words[4] = { L"лес", L"хвоя", L"шашлык", L"ветер" };

std::wstring getWordWithRevealed(std::wstring revealString, std::wstring word) {
	std::wstring transformed = L"";
	wchar_t reveal = revealString[0];

	for (int i = 0; i < word.size(); i++) {
		if (reveal == word[i]) {
			transformed += reveal;
		}
		else {
			transformed += '_';
		}
	}
	return transformed;
}

std::wstring getCombinedWords(std::wstring word1, std:: wstring word2) {
	std::wstring combined = L"";
	for (int i = 0; i < word1.size(); i++) {
		if (word1[i] != '_') {
			combined += word1[i];
		}
		else if (word2[i] != '_') {
			combined += word2[i];
		}
		else {
			combined += '_';
		}
	} 
	return combined;
}

bool containsLetter(std::wstring substr, std::wstring str) {
	wchar_t letter = substr[0];
	for (int i = 0; i < str.size(); i++) {
		if (letter == str[i]) return true;
	}
	return false;
}