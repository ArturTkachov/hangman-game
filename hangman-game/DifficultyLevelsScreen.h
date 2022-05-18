#pragma once
#include "GameScreen.h"

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
	public ref class DifficultyLevelsScreen : public System::Windows::Forms::Form
	{

	public:
		DifficultyLevelsScreen()
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DifficultyLevelsScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ SixHeartsButton;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ EightHeartsButton;
	private: System::Windows::Forms::Button^ FourHeartsButton;


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
			this->SixHeartsButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->EightHeartsButton = (gcnew System::Windows::Forms::Button());
			this->FourHeartsButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// SixHeartsButton
			// 
			this->SixHeartsButton->Location = System::Drawing::Point(598, 380);
			this->SixHeartsButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->SixHeartsButton->Name = L"SixHeartsButton";
			this->SixHeartsButton->Size = System::Drawing::Size(315, 136);
			this->SixHeartsButton->TabIndex = 0;
			this->SixHeartsButton->Text = L"Выбрать 6 середечек";
			this->SixHeartsButton->UseVisualStyleBackColor = true;
			this->SixHeartsButton->Click += gcnew System::EventHandler(this, &DifficultyLevelsScreen::SixHeartsButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(239, 145);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(986, 73);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Выберите количество сердечек";
			// 
			// EightHeartsButton
			// 
			this->EightHeartsButton->Location = System::Drawing::Point(1034, 380);
			this->EightHeartsButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->EightHeartsButton->Name = L"EightHeartsButton";
			this->EightHeartsButton->Size = System::Drawing::Size(315, 136);
			this->EightHeartsButton->TabIndex = 2;
			this->EightHeartsButton->Text = L"Выбрать 8 сердечек";
			this->EightHeartsButton->UseVisualStyleBackColor = true;
			this->EightHeartsButton->Click += gcnew System::EventHandler(this, &DifficultyLevelsScreen::EightHeartsButton_Click);
			// 
			// FourHeartsButton
			// 
			this->FourHeartsButton->Location = System::Drawing::Point(143, 380);
			this->FourHeartsButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->FourHeartsButton->Name = L"FourHeartsButton";
			this->FourHeartsButton->Size = System::Drawing::Size(315, 136);
			this->FourHeartsButton->TabIndex = 3;
			this->FourHeartsButton->Text = L"Выбрать 4 середечка";
			this->FourHeartsButton->UseVisualStyleBackColor = true;
			this->FourHeartsButton->Click += gcnew System::EventHandler(this, &DifficultyLevelsScreen::FourHeartsButton_Click);
			// 
			// DifficultyLevelsScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1492, 830);
			this->Controls->Add(this->FourHeartsButton);
			this->Controls->Add(this->EightHeartsButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SixHeartsButton);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"DifficultyLevelsScreen";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FourHeartsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		(gcnew GameScreen(4))->Show();
	}
	private: System::Void SixHeartsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		(gcnew GameScreen(6))->Show();
	}
	private: System::Void EightHeartsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		(gcnew GameScreen(8))->Show();
	}
};
}
