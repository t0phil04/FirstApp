#pragma once
#include "DifficultyForm.h"  // Include the header file for your DifficultyForm
#include "EasyMode.h"  // Include the header file for your DifficultyForm


namespace FirstApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btInstructions;
	private: System::Windows::Forms::Button^ btDifficultySelector;
	private: System::Windows::Forms::Label^ lbWelcome;
	private: System::Windows::Forms::Button^ btStartGame;

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
			this->btInstructions = (gcnew System::Windows::Forms::Button());
			this->btDifficultySelector = (gcnew System::Windows::Forms::Button());
			this->lbWelcome = (gcnew System::Windows::Forms::Label());
			this->btStartGame = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btInstructions
			// 
			this->btInstructions->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btInstructions->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btInstructions->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btInstructions->Location = System::Drawing::Point(55, 109);
			this->btInstructions->Name = L"btInstructions";
			this->btInstructions->Size = System::Drawing::Size(448, 97);
			this->btInstructions->TabIndex = 0;
			this->btInstructions->Text = L"Game Instructions";
			this->btInstructions->UseVisualStyleBackColor = false;
			this->btInstructions->Click += gcnew System::EventHandler(this, &MainForm::btInstructions_Click);
			// 
			// btDifficultySelector
			// 
			this->btDifficultySelector->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btDifficultySelector->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btDifficultySelector->Location = System::Drawing::Point(55, 233);
			this->btDifficultySelector->Name = L"btDifficultySelector";
			this->btDifficultySelector->Size = System::Drawing::Size(448, 96);
			this->btDifficultySelector->TabIndex = 1;
			this->btDifficultySelector->Text = L"Difficulty Selector";
			this->btDifficultySelector->UseVisualStyleBackColor = false;
			this->btDifficultySelector->Click += gcnew System::EventHandler(this, &MainForm::btDifficultySelector_Click);
			// 
			// lbWelcome
			// 
			this->lbWelcome->AutoSize = true;
			this->lbWelcome->Font = (gcnew System::Drawing::Font(L"Rockwell", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbWelcome->Location = System::Drawing::Point(85, 49);
			this->lbWelcome->Name = L"lbWelcome";
			this->lbWelcome->Size = System::Drawing::Size(393, 33);
			this->lbWelcome->TabIndex = 2;
			this->lbWelcome->Text = L"Welcome to the Game Show!";
			this->lbWelcome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btStartGame
			// 
			this->btStartGame->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btStartGame->Font = (gcnew System::Drawing::Font(L"Rockwell", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btStartGame->Location = System::Drawing::Point(55, 354);
			this->btStartGame->Name = L"btStartGame";
			this->btStartGame->Size = System::Drawing::Size(448, 80);
			this->btStartGame->TabIndex = 3;
			this->btStartGame->Text = L"StartGame";
			this->btStartGame->UseVisualStyleBackColor = false;
			this->btStartGame->Click += gcnew System::EventHandler(this, &MainForm::btStartGame_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(596, 463);
			this->Controls->Add(this->btStartGame);
			this->Controls->Add(this->lbWelcome);
			this->Controls->Add(this->btDifficultySelector);
			this->Controls->Add(this->btInstructions);
			this->MinimumSize = System::Drawing::Size(612, 432);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btInstructions_Click(System::Object^ sender, System::EventArgs^ e) {
		//System::Windows::Forms::MessageBox::Show("Your message goes here", "Title", MessageBoxButtons::OK, MessageBoxIcon::Information);

		System::Windows::Forms::MessageBox::Show(
			"Instructions to the game are found below!\n\n"
			"-----Easy Mode-----\n"
			"This is simple, play the game with no consequences!\n"
			"Sit back, relax, and enjoy the ride.\n"
			"__________________________________________________________________________________\n\n"
			"-----Medium Mode-----\n"
			"This is a little more exciting.\n"
			"Points are now added and deducted with each response and you get a second try!\n"
			"Keep playing to achieve a perfect score!\n"
			"__________________________________________________________________________________\n\n"
			"-----Hard Mode-----\n"
			"This mode is, well, hard... Points are added and subtracted, and if you dip into the negatives you lose.\n"
			"Good luck with this one!\n"
			"__________________________________________________________________________________",
			"Game Instructions",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}



	private: System::Void btDifficultySelector_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create an instance of DifficultyForm
		DifficultyForm^ difficultyForm = gcnew DifficultyForm();

		// Show the DifficultyForm as a dialog (waits for it to be closed before continuing)
		System::Windows::Forms::DialogResult result = difficultyForm->ShowDialog();

	}


	private: System::Void btStartGame_Click(System::Object^ sender, System::EventArgs^ e) {
			
			int selectedDifficulty = DifficultyForm::GetSelectedDifficulty();

			// Easy difficulty
			if (selectedDifficulty == 1) {
				// Create an instance of StartGameForm
				EasyMode^ easyForm = gcnew EasyMode();
				

				wait_for_enter();
				clear();
				easy_mode();
			}
			/*
			else if (selectedDifficulty == 2) {
				// Medium difficulty

				wait_for_enter();
				clear();
				medium_mode();
			}
			else if (selectedDifficulty == 3) {
				// Hard difficulty

				wait_for_enter();
				clear();
				hard_mode();
			}
			*/
	}

	};
	}

