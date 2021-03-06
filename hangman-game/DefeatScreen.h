#pragma once
#include <string>
#include "Utility.h"

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
	public ref class DefeatScreen : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form^ previousScreen;

	public:
		DefeatScreen(System::Windows::Forms::Form^ previousScreen, std::wstring word)
		{
			InitializeComponent();
			this->previousScreen = previousScreen;
			this->WordRevealLabel->Text = L"?????????? ?????: " + castAsSystemString(word);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DefeatScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ WordRevealLabel;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->WordRevealLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(568, 439);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(315, 136);
			this->button1->TabIndex = 0;
			this->button1->Text = L"? ??????? ????";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DefeatScreen::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(509, 173);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(452, 73);
			this->label1->TabIndex = 1;
			this->label1->Text = L"?? ?????????";
			// 
			// WordRevealLabel
			// 
			this->WordRevealLabel->AutoSize = true;
			this->WordRevealLabel->Location = System::Drawing::Point(517, 344);
			this->WordRevealLabel->Name = L"WordRevealLabel";
			this->WordRevealLabel->Size = System::Drawing::Size(0, 25);
			this->WordRevealLabel->TabIndex = 2;
			this->WordRevealLabel->Click += gcnew System::EventHandler(this, &DefeatScreen::label2_Click);
			// 
			// DefeatScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1492, 830);
			this->Controls->Add(this->WordRevealLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"DefeatScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"?????????";
			this->TopMost = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->previousScreen->Close();
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
