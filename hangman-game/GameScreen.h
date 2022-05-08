﻿#pragma once
#include "GameScreen.h"
#include "GameLogic.h"
#include "Utility.h"
#include <iostream>

#pragma once

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
	private: 
		int hearts = 4;
	private: System::Windows::Forms::Label^ wordLengthLabel;
		   int currentWordIndex = rand() % 4;
	public:
		GameScreen(void)
		{
			InitializeComponent();
			std::wstring currentWord = words[this->currentWordIndex];
			System::String^ word = castAsSystemString(getWordWithRevealed(L"", currentWord));
			this->CurrentWordLabel->Text = word;
			int len = currentWord.size();
			this->wordLengthLabel->Text = L"Длина слова: " + System::Convert::ToString(len) + ((len > 5) ? L" букв" : L" буквы");
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
		}
	private: System::Windows::Forms::Label^ CurrentWordLabel;
	private: System::Windows::Forms::TextBox^ letterBox;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;


	protected:

	protected:

	protected:


	protected:

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
			this->letterBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->wordLengthLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// CurrentWordLabel
			// 
			this->CurrentWordLabel->AutoSize = true;
			this->CurrentWordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CurrentWordLabel->Location = System::Drawing::Point(148, 336);
			this->CurrentWordLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->CurrentWordLabel->Name = L"CurrentWordLabel";
			this->CurrentWordLabel->Size = System::Drawing::Size(373, 86);
			this->CurrentWordLabel->TabIndex = 0;
			this->CurrentWordLabel->Text = L"________";
			this->CurrentWordLabel->Click += gcnew System::EventHandler(this, &GameScreen::label1_Click);
			// 
			// letterBox
			// 
			this->letterBox->Location = System::Drawing::Point(1040, 388);
			this->letterBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->letterBox->Name = L"letterBox";
			this->letterBox->Size = System::Drawing::Size(148, 31);
			this->letterBox->TabIndex = 1;
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1198, 388);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(243, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Проверить букву";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GameScreen::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(192, 75);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->MaximumSize = System::Drawing::Size(225, 234);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(225, 234);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(861, 75);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(225, 234);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(528, 75);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(232, 234);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.InitialImage")));
			this->pictureBox4->Location = System::Drawing::Point(1173, 75);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(225, 234);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// wordLengthLabel
			// 
			this->wordLengthLabel->AutoSize = true;
			this->wordLengthLabel->Location = System::Drawing::Point(163, 528);
			this->wordLengthLabel->Name = L"wordLengthLabel";
			this->wordLengthLabel->Size = System::Drawing::Size(0, 25);
			this->wordLengthLabel->TabIndex = 8;
			// 
			// GameScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1521, 830);
			this->Controls->Add(this->wordLengthLabel);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->letterBox);
			this->Controls->Add(this->CurrentWordLabel);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"GameScreen";
			this->Text = L"Игра Виселица";
			this->Load += gcnew System::EventHandler(this, &GameScreen::GameScreen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GameScreen_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::wstring letterToReveal = castAsWstring(this->letterBox->Text);
		std::wstring currentWord = words[this->currentWordIndex];
		this->letterBox->Text = "";
		if (containsLetter(letterToReveal, currentWord)) {
			std::wstring currentWordWithRevealed = castAsWstring(this->CurrentWordLabel->Text);
			System::String^ word = castAsSystemString(getCombinedWords(getWordWithRevealed(letterToReveal, currentWord), currentWordWithRevealed));
			this->CurrentWordLabel->Text = word;
		}
		else {
			switch (this->hearts) {
				case 4:
					this->pictureBox4->Visible = false;
					break;
				case 3:
					this->pictureBox3->Visible = false;
					break;
				case 2:
					this->pictureBox2->Visible = false;
					break;
				case 1:
					this->pictureBox1->Visible = false;
					break;
			}
			this->hearts--;
			if (this->hearts == 0) this->Close();
		};
	}
};
}
