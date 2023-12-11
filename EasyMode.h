#pragma once

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
			// 
			// EasyMode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(999, 559);
			this->Controls->Add(this->btEnter);
			this->Controls->Add(this->txtbxCategoryChooser);
			this->Controls->Add(this->lbCategoryChooser);
			this->Controls->Add(this->btChoice4);
			this->Controls->Add(this->btChoice3);
			this->Controls->Add(this->btChoice2);
			this->Controls->Add(this->btChoice1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbQuestion);
			this->Name = L"EasyMode";
			this->Text = L"EasyMode";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
