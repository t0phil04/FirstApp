#pragma once

namespace FirstApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DifficultyForm
	/// </summary>
	public ref class DifficultyForm : public System::Windows::Forms::Form
	{
	public:
		DifficultyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DifficultyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbDifficultyText;
	private: System::Windows::Forms::Label^ lbEasyMode;
	private: System::Windows::Forms::Label^ lbMediumMode;
	private: System::Windows::Forms::Label^ lbHardMode;
	private: System::Windows::Forms::TextBox^ txtbxDifficultyAnswer;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbDifficultyText = (gcnew System::Windows::Forms::Label());
			this->lbEasyMode = (gcnew System::Windows::Forms::Label());
			this->lbMediumMode = (gcnew System::Windows::Forms::Label());
			this->lbHardMode = (gcnew System::Windows::Forms::Label());
			this->txtbxDifficultyAnswer = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lbDifficultyText
			// 
			this->lbDifficultyText->AutoSize = true;
			this->lbDifficultyText->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDifficultyText->Location = System::Drawing::Point(174, 34);
			this->lbDifficultyText->MaximumSize = System::Drawing::Size(268, 33);
			this->lbDifficultyText->MinimumSize = System::Drawing::Size(268, 33);
			this->lbDifficultyText->Name = L"lbDifficultyText";
			this->lbDifficultyText->Size = System::Drawing::Size(268, 33);
			this->lbDifficultyText->TabIndex = 0;
			this->lbDifficultyText->Text = L"Difficulty Options:";
			this->lbDifficultyText->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbEasyMode
			// 
			this->lbEasyMode->AutoSize = true;
			this->lbEasyMode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEasyMode->Location = System::Drawing::Point(64, 111);
			this->lbEasyMode->Name = L"lbEasyMode";
			this->lbEasyMode->Size = System::Drawing::Size(114, 24);
			this->lbEasyMode->TabIndex = 1;
			this->lbEasyMode->Text = L"Easy Mode";
			// 
			// lbMediumMode
			// 
			this->lbMediumMode->AutoSize = true;
			this->lbMediumMode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMediumMode->Location = System::Drawing::Point(229, 110);
			this->lbMediumMode->Name = L"lbMediumMode";
			this->lbMediumMode->Size = System::Drawing::Size(159, 25);
			this->lbMediumMode->TabIndex = 2;
			this->lbMediumMode->Text = L"Medium Mode";
			// 
			// lbHardMode
			// 
			this->lbHardMode->AutoSize = true;
			this->lbHardMode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHardMode->Location = System::Drawing::Point(431, 110);
			this->lbHardMode->Name = L"lbHardMode";
			this->lbHardMode->Size = System::Drawing::Size(127, 25);
			this->lbHardMode->TabIndex = 3;
			this->lbHardMode->Text = L"Hard Mode";
			// 
			// txtbxDifficultyAnswer
			// 
			this->txtbxDifficultyAnswer->Location = System::Drawing::Point(180, 193);
			this->txtbxDifficultyAnswer->Name = L"txtbxDifficultyAnswer";
			this->txtbxDifficultyAnswer->Size = System::Drawing::Size(231, 20);
			this->txtbxDifficultyAnswer->TabIndex = 4;
			this->txtbxDifficultyAnswer->TextChanged += gcnew System::EventHandler(this, &DifficultyForm::txtbxDifficultyAnswer_TextChanged);
			// 
			// DifficultyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(656, 360);
			this->Controls->Add(this->txtbxDifficultyAnswer);
			this->Controls->Add(this->lbHardMode);
			this->Controls->Add(this->lbMediumMode);
			this->Controls->Add(this->lbEasyMode);
			this->Controls->Add(this->lbDifficultyText);
			this->Name = L"DifficultyForm";
			this->Text = L"DifficultyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txtbxDifficultyAnswer_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		// Event handler for TextChanged event of the TextBox

		// You can add validation if needed
		String^ inputText = txtbxDifficultyAnswer->Text; // = text box name->Text

		int difficulty = -1;
		if (Int32::TryParse(inputText, difficulty)) {
			// Conversion successful
			// Handle the logic based on the difficulty
			if (difficulty >= 1 && difficulty <= 3) {
				// Valid difficulty range
				// Example: Set a label to provide feedback
				System::Windows::Forms::MessageBox::Show("Difficulty Selected: " + difficulty, "Difficulty Selected", MessageBoxButtons::OK, MessageBoxIcon::Information);
				
			}
			else {
				// Invalid difficulty range
				// Example: Set a label to provide feedback
				System::Windows::Forms::MessageBox::Show("Invalid difficulty. Please enter a value between 1 and 3.", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Information);
			
			}
		}
		else {
			// Conversion failed
			// Example: Set a label to provide feedback
			System::Windows::Forms::MessageBox::Show("Invalid input. Please enter a numeric value.", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Information);
			
		}
	}

};
}
