#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	lab7::MyForm form;
	Application::Run(% form);
	return 0;
}

lab7::MyForm::MyForm(void)
{
	InitializeComponent();
}

lab7::MyForm::~MyForm()
{
	if (components)
	{
		delete components;
	}
}

System::Void lab7::MyForm::Calculate_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		double start = System::Convert::ToDouble(this->StartTextBox->Text);
		double end = System::Convert::ToDouble(this->EndTextBox->Text);
		double step = System::Convert::ToDouble(this->StepTextBox->Text);
		this->outputTextBox->Clear();

		if (start >= end) {
			MessageBox::Show("The end of the interval must be greater than the beginning!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		if (step <= 0) {
			MessageBox::Show("The step must be greater than zero!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			while (start <= end) {
				String^ result = "";
				Function function(start);

				try {
					double variable = function.calculateY();
					result += "y(" + start + ") = " + variable + "\n";
				}
				catch (const exception& ex) {
					MessageBox::Show(gcnew System::String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				this->outputTextBox->AppendText(System::Convert::ToString(result) + Environment::NewLine);
				start += step;
			}
		}
	}
	catch (const exception &ex) {
		MessageBox::Show(gcnew System::String(ex.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (System::FormatException^) {
		MessageBox::Show("Invalid input. Please enter valid numbers for the interval and step.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (...) {
		MessageBox::Show("An unknown error occurred.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

void lab7::MyForm::FormShown(Object^ sender, EventArgs^ e)
{
	this->outputTextBox->Focus();
}

System::Void lab7::MyForm::button_exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}
