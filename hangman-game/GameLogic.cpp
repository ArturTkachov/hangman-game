#include "GameLogic.h"
#include <string>

std::wstring words[4] = { L"лес", L"хвоя", L"шашлык", L"ветер" };

std::wstring getWordWithRevealed(std::wstring revealString, std::wstring word) {
	std::wstring transformed = L"";
	char reveal = revealString[0];

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