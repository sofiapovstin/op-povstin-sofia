#include "MyForm.h"

void lab7::MyForm::InitializeComponent(void)
{
    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
    this->StartTextBox = (gcnew System::Windows::Forms::TextBox());
    this->StepTextBox = (gcnew System::Windows::Forms::TextBox());
    this->EndTextBox = (gcnew System::Windows::Forms::TextBox());
    this->Calculate = (gcnew System::Windows::Forms::Button());
    this->outputTextBox = (gcnew System::Windows::Forms::TextBox());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->button_exit = (gcnew System::Windows::Forms::Button());
    this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
    this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
    this->SuspendLayout();
    // 
    // StartTextBox
    // 
    this->StartTextBox->Location = System::Drawing::Point(113, 228);
    this->StartTextBox->Name = L"StartTextBox";
    this->StartTextBox->Size = System::Drawing::Size(115, 26);
    this->StartTextBox->TabIndex = 0;
    // 
    // StepTextBox
    // 
    this->StepTextBox->Location = System::Drawing::Point(141, 335);
    this->StepTextBox->Name = L"StepTextBox";
    this->StepTextBox->Size = System::Drawing::Size(87, 26);
    this->StepTextBox->TabIndex = 2;
    // 
    // EndTextBox
    // 
    this->EndTextBox->Location = System::Drawing::Point(113, 281);
    this->EndTextBox->Name = L"EndTextBox";
    this->EndTextBox->Size = System::Drawing::Size(115, 26);
    this->EndTextBox->TabIndex = 3;
    // 
    // Calculate
    // 
    this->Calculate->Font = (gcnew System::Drawing::Font(L"Rockwell", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->Calculate->Location = System::Drawing::Point(23, 405);
    this->Calculate->Name = L"Calculate";
    this->Calculate->Size = System::Drawing::Size(205, 102);
    this->Calculate->TabIndex = 4;
    this->Calculate->Text = L"Calculate";
    this->Calculate->UseVisualStyleBackColor = true;
    this->Calculate->Click += gcnew System::EventHandler(this, &MyForm::Calculate_Click);
    // 
    // outputTextBox
    // 
    this->outputTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->outputTextBox->Location = System::Drawing::Point(260, 56);
    this->outputTextBox->Multiline = true;
    this->outputTextBox->Name = L"outputTextBox";
    this->outputTextBox->ReadOnly = true;
    this->outputTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Both;
    this->outputTextBox->Size = System::Drawing::Size(297, 460);
    this->outputTextBox->TabIndex = 5;
    // 
    // label1
    // 
    this->label1->AutoSize = true;
    this->label1->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label1->Location = System::Drawing::Point(17, 228);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(87, 24);
    this->label1->TabIndex = 6;
    this->label1->Text = L"Enter a:";
    // 
    // label2
    // 
    this->label2->AutoSize = true;
    this->label2->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label2->Location = System::Drawing::Point(19, 281);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(88, 24);
    this->label2->TabIndex = 7;
    this->label2->Text = L"Enter b:";
    // 
    // label3
    // 
    this->label3->AutoSize = true;
    this->label3->Font = (gcnew System::Drawing::Font(L"Rockwell", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->label3->Location = System::Drawing::Point(19, 335);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(116, 24);
    this->label3->TabIndex = 8;
    this->label3->Text = L"Enter step:";
    // 
    // button_exit
    // 
    this->button_exit->BackColor = System::Drawing::Color::LightCoral;
    this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
    this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
    this->button_exit->ForeColor = System::Drawing::SystemColors::ControlLightLight;
    this->button_exit->Location = System::Drawing::Point(516, 12);
    this->button_exit->Name = L"button_exit";
    this->button_exit->Size = System::Drawing::Size(41, 38);
    this->button_exit->TabIndex = 9;
    this->button_exit->Text = L"X";
    this->button_exit->UseVisualStyleBackColor = false;
    this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
    // 
    // pictureBox1
    // 
    this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
    this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
    this->pictureBox1->Location = System::Drawing::Point(21, 56);
    this->pictureBox1->Name = L"pictureBox1";
    this->pictureBox1->Size = System::Drawing::Size(207, 75);
    this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
    this->pictureBox1->TabIndex = 10;
    this->pictureBox1->TabStop = false;
    // 
    // pictureBox2
    // 
    this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
    this->pictureBox2->Location = System::Drawing::Point(21, 148);
    this->pictureBox2->Name = L"pictureBox2";
    this->pictureBox2->Size = System::Drawing::Size(207, 32);
    this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
    this->pictureBox2->TabIndex = 11;
    this->pictureBox2->TabStop = false;
    // 
    // MyForm
    // 
    this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->BackColor = System::Drawing::SystemColors::ActiveCaption;
    this->ClientSize = System::Drawing::Size(569, 537);
    this->Controls->Add(this->pictureBox2);
    this->Controls->Add(this->pictureBox1);
    this->Controls->Add(this->button_exit);
    this->Controls->Add(this->label3);
    this->Controls->Add(this->label2);
    this->Controls->Add(this->label1);
    this->Controls->Add(this->outputTextBox);
    this->Controls->Add(this->Calculate);
    this->Controls->Add(this->EndTextBox);
    this->Controls->Add(this->StepTextBox);
    this->Controls->Add(this->StartTextBox);
    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
    this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
    this->Name = L"MyForm";
    this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
    this->Text = L"Function";
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
    this->ResumeLayout(false);
    this->PerformLayout();

}