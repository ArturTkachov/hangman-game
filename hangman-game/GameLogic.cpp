#include "GameLogic.h"
#include <string>

std::wstring words[4] = { L"лес", L"хвоя", L"шашлык", L"ветер" };

wchar_t permittedLetters[33] = { 
	L'а', L'б', L'в', L'г', L'д',
	L'е', L'ё', L'ж', L'з', L'и',
	L'й', L'к', L'л', L'м', L'н',
	L'о', L'п', L'р', L'с', L'т',
	L'у', L'ф', L'х', L'ц', L'ч',
	L'ш', L'щ', L'ъ', L'ы', L'ь',
	L'э', L'ю', L'я' 
};

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