#include "GameLogic.h"
#include <string>

const std::wstring WORDS[3][4] = {
	{ L"лес", L"хвоя", L"шашлык", L"ветер" },
	{ L"репозиторий", L"метод", L"декоратор", L"класс" },
	{ L"роза", L"архидея", L"ромашка", L"фиалка" }
};

const wchar_t PERMITTED_LETTERS[33] = { 
	L'а', L'б', L'в', L'г', L'д',
	L'е', L'ё', L'ж', L'з', L'и',
	L'й', L'к', L'л', L'м', L'н',
	L'о', L'п', L'р', L'с', L'т',
	L'у', L'ф', L'х', L'ц', L'ч',
	L'ш', L'щ', L'ъ', L'ы', L'ь',
	L'э', L'ю', L'я' 
};

bool isPermittedLetter(wchar_t letter) {
	for (int i = 0; i < sizeof(PERMITTED_LETTERS) / sizeof(wchar_t); i++) {
		if (PERMITTED_LETTERS[i] == letter) return true;
	}
	return false;
}

bool isUsedLetter(wchar_t letter, wchar_t usedLetters[], int length) {
	for (int i = 0; i < length; i++) {
		if (usedLetters[i] == letter) return true;
	}
	return false;
}

std::wstring getWordWithRevealed(wchar_t letter, std::wstring word) {
	std::wstring transformed = L"";
	for (int i = 0; i < word.size(); i++) {
		if (letter == word[i]) {
			transformed += letter;
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

bool containsLetter(wchar_t letter, std::wstring str) {
	for (int i = 0; i < str.size(); i++) {
		if (letter == str[i]) return true;
	}
	return false;
}