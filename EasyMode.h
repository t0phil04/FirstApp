#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "QuestionsFunctions.h"
#include <random>
#include <algorithm>
#include <unordered_map>


using std::vector; using std::string;
/*
int answer = -1;
bool is_answer_correct = false;
int category_count = 3;
int category_chosen_count = 0;
int categories_chosen[3] = { 1, 2, 3 };
// **** Answers for Categories *****
vector<int> correct_answer_movies = { 1, 1, 2, 3, 2, 4, 3, 1, 3, 2 };
vector<int> correct_answer_science = { 2, 4, 1, 4, 1, 3, 1, 3, 1, 1 };
vector<int> correct_answer_history = { 2, 2, 2, 3, 2, 2, 2, 3, 3, 2 };
/ *********************************
vector<vector<string>> current_bank;
*/
static std::random_device randomizer;
static std::mt19937 g(randomizer());

//bool should_quit = false;

namespace FirstApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EasyMode
	/// </summary>
	public ref class EasyMode : public System::Windows::Forms::Form
	{
	public:
		EasyMode(void)
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
		~EasyMode()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbQuestion;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btChoice1;
	private: System::Windows::Forms::Button^ btChoice2;
	private: System::Windows::Forms::Button^ btChoice3;
	private: System::Windows::Forms::Button^ btChoice4;
	private: System::Windows::Forms::Label^ lbCategoryChooser;
	private: System::Windows::Forms::TextBox^ txtbxCategoryChooser;
	private: System::Windows::Forms::Button^ btEnter;
	private: System::Windows::Forms::Label^ lbMovies;
	private: System::Windows::Forms::Label^ lbScience;
	private: System::Windows::Forms::Label^ lbHistory;
	private: System::Windows::Forms::Label^ lbQuit;




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
			this->lbQuestion = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btChoice1 = (gcnew System::Windows::Forms::Button());
			this->btChoice2 = (gcnew System::Windows::Forms::Button());
			this->btChoice3 = (gcnew System::Windows::Forms::Button());
			this->btChoice4 = (gcnew System::Windows::Forms::Button());
			this->lbCategoryChooser = (gcnew System::Windows::Forms::Label());
			this->txtbxCategoryChooser = (gcnew System::Windows::Forms::TextBox());
			this->btEnter = (gcnew System::Windows::Forms::Button());
			this->lbMovies = (gcnew System::Windows::Forms::Label());
			this->lbScience = (gcnew System::Windows::Forms::Label());
			this->lbHistory = (gcnew System::Windows::Forms::Label());
			this->lbQuit = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbQuestion
			// 
			this->lbQuestion->AutoSize = true;
			this->lbQuestion->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbQuestion->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbQuestion->Location = System::Drawing::Point(12, 66);
			this->lbQuestion->Name = L"lbQuestion";
			this->lbQuestion->Size = System::Drawing::Size(146, 33);
			this->lbQuestion->TabIndex = 0;
			this->lbQuestion->Text = L"Question:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 190);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Answer Choices:";
			// 
			// btChoice1
			// 
			this->btChoice1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btChoice1->Location = System::Drawing::Point(83, 231);
			this->btChoice1->Name = L"btChoice1";
			this->btChoice1->Size = System::Drawing::Size(885, 70);
			this->btChoice1->TabIndex = 2;
			this->btChoice1->Text = L"Choice1";
			this->btChoice1->UseVisualStyleBackColor = true;
			// 
			// btChoice2
			// 
			this->btChoice2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btChoice2->Location = System::Drawing::Point(83, 318);
			this->btChoice2->Name = L"btChoice2";
			this->btChoice2->Size = System::Drawing::Size(885, 70);
			this->btChoice2->TabIndex = 3;
			this->btChoice2->Text = L"Choice2";
			this->btChoice2->UseVisualStyleBackColor = true;
			// 
			// btChoice3
			// 
			this->btChoice3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btChoice3->Location = System::Drawing::Point(83, 394);
			this->btChoice3->Name = L"btChoice3";
			this->btChoice3->Size = System::Drawing::Size(885, 70);
			this->btChoice3->TabIndex = 4;
			this->btChoice3->Text = L"Choice3";
			this->btChoice3->UseVisualStyleBackColor = true;
			// 
			// btChoice4
			// 
			this->btChoice4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btChoice4->Location = System::Drawing::Point(83, 477);
			this->btChoice4->Name = L"btChoice4";
			this->btChoice4->Size = System::Drawing::Size(885, 70);
			this->btChoice4->TabIndex = 5;
			this->btChoice4->Text = L"Choice4";
			this->btChoice4->UseVisualStyleBackColor = true;
			// 
			// lbCategoryChooser
			// 
			this->lbCategoryChooser->AutoSize = true;
			this->lbCategoryChooser->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbCategoryChooser->Font = (gcnew System::Drawing::Font(L"Rockwell", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCategoryChooser->Location = System::Drawing::Point(12, 18);
			this->lbCategoryChooser->Name = L"lbCategoryChooser";
			this->lbCategoryChooser->Size = System::Drawing::Size(122, 29);
			this->lbCategoryChooser->TabIndex = 6;
			this->lbCategoryChooser->Text = L"Category";
			// 
			// txtbxCategoryChooser
			// 
			this->txtbxCategoryChooser->Location = System::Drawing::Point(161, 27);
			this->txtbxCategoryChooser->Name = L"txtbxCategoryChooser";
			this->txtbxCategoryChooser->Size = System::Drawing::Size(273, 20);
			this->txtbxCategoryChooser->TabIndex = 7;
			this->txtbxCategoryChooser->TextChanged += gcnew System::EventHandler(this, &EasyMode::txtbxCategoryChooser_TextChanged);
			// 
			// btEnter
			// 
			this->btEnter->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btEnter->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btEnter->Location = System::Drawing::Point(455, 18);
			this->btEnter->Name = L"btEnter";
			this->btEnter->Size = System::Drawing::Size(105, 43);
			this->btEnter->TabIndex = 8;
			this->btEnter->Text = L"Enter";
			this->btEnter->UseVisualStyleBackColor = false;
			this->btEnter->Click += gcnew System::EventHandler(this, &EasyMode::btEnter_Click);
			// 
			// lbMovies
			// 
			this->lbMovies->AutoSize = true;
			this->lbMovies->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbMovies->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMovies->Location = System::Drawing::Point(566, 27);
			this->lbMovies->Name = L"lbMovies";
			this->lbMovies->Size = System::Drawing::Size(105, 25);
			this->lbMovies->TabIndex = 9;
			this->lbMovies->Text = L"1. Movies";
			// 
			// lbScience
			// 
			this->lbScience->AutoSize = true;
			this->lbScience->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbScience->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbScience->Location = System::Drawing::Point(677, 28);
			this->lbScience->Name = L"lbScience";
			this->lbScience->Size = System::Drawing::Size(113, 25);
			this->lbScience->TabIndex = 10;
			this->lbScience->Text = L"2. Science";
			// 
			// lbHistory
			// 
			this->lbHistory->AutoSize = true;
			this->lbHistory->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbHistory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHistory->Location = System::Drawing::Point(796, 28);
			this->lbHistory->Name = L"lbHistory";
			this->lbHistory->Size = System::Drawing::Size(103, 25);
			this->lbHistory->TabIndex = 11;
			this->lbHistory->Text = L"3. History";
			// 
			// lbQuit
			// 
			this->lbQuit->AutoSize = true;
			this->lbQuit->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbQuit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbQuit->Location = System::Drawing::Point(905, 28);
			this->lbQuit->Name = L"lbQuit";
			this->lbQuit->Size = System::Drawing::Size(75, 25);
			this->lbQuit->TabIndex = 12;
			this->lbQuit->Text = L"0. Quit";
			// 
			// EasyMode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(999, 559);
			this->Controls->Add(this->lbQuit);
			this->Controls->Add(this->lbHistory);
			this->Controls->Add(this->lbScience);
			this->Controls->Add(this->lbMovies);
			this->Controls->Add(this->btEnter);
			this->Controls->Add(this->txtbxCategoryChooser);
			this->Controls->Add(this->lbCategoryChooser);
			this->Controls->Add(this->btChoice4);
			this->Controls->Add(this->btChoice3);
			this->Controls->Add(this->btChoice2);
			this->Controls->Add(this->btChoice1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbQuestion);
			this->MaximumSize = System::Drawing::Size(1015, 598);
			this->MinimumSize = System::Drawing::Size(1015, 598);
			this->Name = L"EasyMode";
			this->Text = L"EasyMode";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	// Declare a flag to track whether the text is intentionally cleared
	private: bool isTextCleared = false;
	private: static int CategorySelected = -1;
#pragma endregion
	private: System::Void txtbxCategoryChooser_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		// Event handler for TextChanged event of the TextBox

		// You can add validation if needed
		String^ inputText = txtbxCategoryChooser->Text;

		// Check if the text is not empty and not intentionally cleared
		if (!String::IsNullOrEmpty(inputText) && !isTextCleared) {
			int category = -1;
			if (Int32::TryParse(inputText, category)) {
				// Conversion successful
				if (category >= 0 && category <= 3) {
					// Valid difficulty range
					// Example: Set a label to provide feedback
					System::Windows::Forms::MessageBox::Show("Category Selected: " + category, "Category Selected", MessageBoxButtons::OK, MessageBoxIcon::Information);
					CategorySelected = category;
				}
				else {
					// Invalid difficulty range
					// Example: Set a label to provide feedback
					System::Windows::Forms::MessageBox::Show("Invalid Category. Please enter a value between 0 and 3.", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			}
			else {
				// Conversion failed
				// Example: Set a label to provide feedback
				System::Windows::Forms::MessageBox::Show("Invalid input. Please enter a numeric value.", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	}
    private: System::Void btEnter_Click(System::Object^ sender, System::EventArgs^ e) {
		isTextCleared = true;  // Set the flag to indicate intentional clearing
		this->txtbxCategoryChooser->Text = "";  // Set the Text property to an empty string
		isTextCleared = false;  // Reset the flag after clearing the text
    
    	btChoice1->Text = "Pulp fiction";


		// Debugging statement
		//MessageBox::Show("Button text changed!");
    
    }
};
}

/*
isTextCleared = true;  // Set the flag to indicate intentional clearing
	this->txtbxCategoryChooser->Text = "";  // Set the Text property to an empty string
	isTextCleared = false;  // Reset the flag after clearing the text
*/
