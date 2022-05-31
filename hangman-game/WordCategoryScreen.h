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
	public ref class WordCategoryScreen : public System::Windows::Forms::Form
	{

	private: int hearts;
	public:
		WordCategoryScreen(int hearts)
		{
			InitializeComponent();
			this->hearts = hearts;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~WordCategoryScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ SecondCategoryButton;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ThirdCategoryButton;

	private: System::Windows::Forms::Button^ FirstCategoryButton;



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
			this->SecondCategoryButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ThirdCategoryButton = (gcnew System::Windows::Forms::Button());
			this->FirstCategoryButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// SecondCategoryButton
			// 
			this->SecondCategoryButton->Location = System::Drawing::Point(598, 380);
			this->SecondCategoryButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->SecondCategoryButton->Name = L"SecondCategoryButton";
			this->SecondCategoryButton->Size = System::Drawing::Size(315, 136);
			this->SecondCategoryButton->TabIndex = 0;
			this->SecondCategoryButton->Text = L"ИТ";
			this->SecondCategoryButton->UseVisualStyleBackColor = true;
			this->SecondCategoryButton->Click += gcnew System::EventHandler(this, &WordCategoryScreen::SecondCategoryButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(347, 152);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(818, 73);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Выберите категорию слов";
			// 
			// ThirdCategoryButton
			// 
			this->ThirdCategoryButton->Location = System::Drawing::Point(1034, 380);
			this->ThirdCategoryButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->ThirdCategoryButton->Name = L"ThirdCategoryButton";
			this->ThirdCategoryButton->Size = System::Drawing::Size(315, 136);
			this->ThirdCategoryButton->TabIndex = 2;
			this->ThirdCategoryButton->Text = L"Цветы";
			this->ThirdCategoryButton->UseVisualStyleBackColor = true;
			this->ThirdCategoryButton->Click += gcnew System::EventHandler(this, &WordCategoryScreen::ThirdCategoryButton_Click);
			// 
			// FirstCategoryButton
			// 
			this->FirstCategoryButton->Location = System::Drawing::Point(143, 380);
			this->FirstCategoryButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->FirstCategoryButton->Name = L"FirstCategoryButton";
			this->FirstCategoryButton->Size = System::Drawing::Size(315, 136);
			this->FirstCategoryButton->TabIndex = 3;
			this->FirstCategoryButton->Text = L"Отдых";
			this->FirstCategoryButton->UseVisualStyleBackColor = true;
			this->FirstCategoryButton->Click += gcnew System::EventHandler(this, &WordCategoryScreen::FirstCategoryButton_Click);
			// 
			// WordCategoryScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1492, 830);
			this->Controls->Add(this->FirstCategoryButton);
			this->Controls->Add(this->ThirdCategoryButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SecondCategoryButton);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"WordCategoryScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Экран выбора категории слов";
			this->TopMost = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FirstCategoryButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		(gcnew GameScreen(this->hearts, 0))->Show();
	}
	private: System::Void SecondCategoryButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		(gcnew GameScreen(this->hearts, 1))->Show();
	}
	private: System::Void ThirdCategoryButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		(gcnew GameScreen(this->hearts, 2))->Show();
	}
	};
}
