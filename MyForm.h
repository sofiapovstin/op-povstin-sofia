#pragma once
#include "Function.h"

namespace lab7 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);
	protected:
		~MyForm();
	private: 
		System::Windows::Forms::TextBox^ StartTextBox;
		System::Windows::Forms::TextBox^ StepTextBox;
		System::Windows::Forms::TextBox^ EndTextBox;
		System::Windows::Forms::Button^ Calculate;
		System::Windows::Forms::TextBox^ outputTextBox;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Button^ button_exit;
		System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void);
#pragma endregion
		System::Void Calculate_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e);
		void FormShown(Object^ sender, EventArgs^ e);

	};
}
