#pragma once
#include "GameScreen.h"
#include "VictoryScreen.h"
#include "DefeatScreen.h"
#include "ValidLettersDialog.h"
#include "GameLogic.h"
#include "Utility.h"
#include <iostream>

namespace hangman_game {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class GameScreen : public System::Windows::Forms::Form
	{
	private: int hearts = 4;
	private: int categoryIndex;
	private: int currentWordIndex = rand() % 4;
	private: int usedLetterIndex = 0;
	private: wchar_t* usedLetters;
	private: System::Windows::Forms::Label^ WordLengthLabel;
	private: System::Windows::Forms::Label^ HeartsLabel;
	private: System::Windows::Forms::Label^ UsedLettersLabel;
	public:
		GameScreen(int hearts, int categoryIndex)
		{
			InitializeComponent();
			this->hearts = hearts;
			this->HeartsLabel->Text = System::Convert::ToString(hearts);
			
			this->categoryIndex = categoryIndex;
			std::wstring currentWord = WORDS[categoryIndex][this->currentWordIndex];
			System::String^ word = castAsSystemString(getWordWithRevealed(L' ', currentWord));
			this->CurrentWordLabel->Text = word;

			int len = currentWord.size();
			this->WordLengthLabel->Text = L"Длина слова: " + System::Convert::ToString(len) + ((len > 4) ? L" букв" : L" буквы");

			this->usedLetters = new wchar_t[50];
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GameScreen()
		{
			if (components)
			{
				delete components;
			}
			delete[] this->usedLetters;
		}
	private: System::Windows::Forms::Label^ CurrentWordLabel;
	private: System::Windows::Forms::TextBox^ LetterBox;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ CheckLetterButton;
	private: System::Windows::Forms::PictureBox^ PictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameScreen::typeid));
			this->CurrentWordLabel = (gcnew System::Windows::Forms::Label());
			this->LetterBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CheckLetterButton = (gcnew System::Windows::Forms::Button());
			this->PictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->WordLengthLabel = (gcnew System::Windows::Forms::Label());
			this->UsedLettersLabel = (gcnew System::Windows::Forms::Label());
			this->HeartsLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// CurrentWordLabel
			// 
			this->CurrentWordLabel->AutoSize = true;
			this->CurrentWordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CurrentWordLabel->Location = System::Drawing::Point(153, 338);
			this->CurrentWordLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->CurrentWordLabel->Name = L"CurrentWordLabel";
			this->CurrentWordLabel->Size = System::Drawing::Size(373, 86);
			this->CurrentWordLabel->TabIndex = 0;
			this->CurrentWordLabel->Text = L"________";
			// 
			// LetterBox
			// 
			this->LetterBox->Location = System::Drawing::Point(1040, 388);
			this->LetterBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->LetterBox->Name = L"LetterBox";
			this->LetterBox->Size = System::Drawing::Size(148, 31);
			this->LetterBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(962, 392);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Буква";
			// 
			// CheckLetterButton
			// 
			this->CheckLetterButton->Location = System::Drawing::Point(1198, 388);
			this->CheckLetterButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->CheckLetterButton->Name = L"CheckLetterButton";
			this->CheckLetterButton->Size = System::Drawing::Size(243, 36);
			this->CheckLetterButton->TabIndex = 3;
			this->CheckLetterButton->Text = L"Проверить букву";
			this->CheckLetterButton->UseVisualStyleBackColor = true;
			this->CheckLetterButton->Click += gcnew System::EventHandler(this, &GameScreen::CheckLetterButton_Click);
			// 
			// PictureBox1
			// 
			this->PictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureBox1.Image")));
			this->PictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureBox1.InitialImage")));
			this->PictureBox1->Location = System::Drawing::Point(1198, 47);
			this->PictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->PictureBox1->MaximumSize = System::Drawing::Size(225, 234);
			this->PictureBox1->Name = L"PictureBox1";
			this->PictureBox1->Size = System::Drawing::Size(225, 225);
			this->PictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBox1->TabIndex = 4;
			this->PictureBox1->TabStop = false;
			// 
			// WordLengthLabel
			// 
			this->WordLengthLabel->AutoSize = true;
			this->WordLengthLabel->Location = System::Drawing::Point(163, 528);
			this->WordLengthLabel->Name = L"WordLengthLabel";
			this->WordLengthLabel->Size = System::Drawing::Size(0, 25);
			this->WordLengthLabel->TabIndex = 8;
			// 
			// UsedLettersLabel
			// 
			this->UsedLettersLabel->AutoSize = true;
			this->UsedLettersLabel->Location = System::Drawing::Point(163, 667);
			this->UsedLettersLabel->Name = L"UsedLettersLabel";
			this->UsedLettersLabel->Size = System::Drawing::Size(254, 25);
			this->UsedLettersLabel->TabIndex = 9;
			this->UsedLettersLabel->Text = L"Использованные буквы:";
			// 
			// HeartsLabel
			// 
			this->HeartsLabel->AutoSize = true;
			this->HeartsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HeartsLabel->Location = System::Drawing::Point(1003, 47);
			this->HeartsLabel->Name = L"HeartsLabel";
			this->HeartsLabel->Size = System::Drawing::Size(199, 217);
			this->HeartsLabel->TabIndex = 10;
			this->HeartsLabel->Text = L"9";
			// 
			// GameScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1521, 830);
			this->Controls->Add(this->HeartsLabel);
			this->Controls->Add(this->UsedLettersLabel);
			this->Controls->Add(this->WordLengthLabel);
			this->Controls->Add(this->PictureBox1);
			this->Controls->Add(this->CheckLetterButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LetterBox);
			this->Controls->Add(this->CurrentWordLabel);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"GameScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Игра Виселица";
			this->TopMost = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CheckLetterButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ textToReveal = this->LetterBox->Text;
		if (System::String::IsNullOrWhiteSpace(textToReveal)) return;

		wchar_t letterToReveal = System::Char::ToLower(textToReveal[0]);
		if (!isPermittedLetter(letterToReveal) || isUsedLetter(letterToReveal, this->usedLetters, this->usedLetterIndex + 1)) {
			(gcnew ValidLettersDialog)->ShowDialog();
			return;
		};
		this->UsedLettersLabel->Text += L" " + letterToReveal + L",";
		this->usedLetters[this->usedLetterIndex] = letterToReveal;
		this->usedLetterIndex++;

		std::wstring currentWord = WORDS[this->categoryIndex][this->currentWordIndex];
		this->LetterBox->Text = "";

		if (containsLetter(letterToReveal, currentWord)) {
			std::wstring currentWordWithRevealed = castAsWstring(this->CurrentWordLabel->Text);
			System::String^ word = castAsSystemString(getCombinedWords(getWordWithRevealed(letterToReveal, currentWord), currentWordWithRevealed));
			this->CurrentWordLabel->Text = word;
		}
		else {
			this->hearts--;
			this->HeartsLabel->Text = System::Convert::ToString(this->hearts);
		};

		if (this->hearts == 0) (gcnew DefeatScreen(this, currentWord))->ShowDialog();

		std::wstring wordWithRevealed = castAsWstring(this->CurrentWordLabel->Text);
		if (currentWord == wordWithRevealed) (gcnew VictoryScreen(this))->ShowDialog();
	}
};
}
