#pragma once

namespace PhotoEditorWin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ filtersToolStripMenuItem;



	private: System::Windows::Forms::PictureBox^ StartImg;
	private: System::Windows::Forms::PictureBox^ ProcImg;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;

	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ToolStripMenuItem^ copyImageToolStripMenuItem;
	private: System::Windows::Forms::CheckBox^ draw_box;

	private: System::Windows::Forms::NumericUpDown^ tnickness_nud;


	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filtersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->StartImg = (gcnew System::Windows::Forms::PictureBox());
			this->ProcImg = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tnickness_nud = (gcnew System::Windows::Forms::NumericUpDown());
			this->draw_box = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StartImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProcImg))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tnickness_nud))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->openToolStripMenuItem,
					this->saveAsToolStripMenuItem, this->clearToolStripMenuItem, this->filtersToolStripMenuItem, this->copyImageToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(905, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(70, 24);
			this->saveAsToolStripMenuItem->Text = L"SaveAs";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// clearToolStripMenuItem
			// 
			this->clearToolStripMenuItem->Name = L"clearToolStripMenuItem";
			this->clearToolStripMenuItem->Size = System::Drawing::Size(107, 24);
			this->clearToolStripMenuItem->Text = L"ClearAllImgs";
			this->clearToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clearToolStripMenuItem_Click);
			// 
			// filtersToolStripMenuItem
			// 
			this->filtersToolStripMenuItem->Name = L"filtersToolStripMenuItem";
			this->filtersToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->filtersToolStripMenuItem->Text = L"Filters";
			// 
			// copyImageToolStripMenuItem
			// 
			this->copyImageToolStripMenuItem->Name = L"copyImageToolStripMenuItem";
			this->copyImageToolStripMenuItem->Size = System::Drawing::Size(99, 24);
			this->copyImageToolStripMenuItem->Text = L"CopyImage";
			this->copyImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::copyImageToolStripMenuItem_Click);
			// 
			// StartImg
			// 
			this->StartImg->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->StartImg->Location = System::Drawing::Point(12, 188);
			this->StartImg->Name = L"StartImg";
			this->StartImg->Size = System::Drawing::Size(375, 244);
			this->StartImg->TabIndex = 1;
			this->StartImg->TabStop = false;
			// 
			// ProcImg
			// 
			this->ProcImg->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ProcImg->Location = System::Drawing::Point(515, 188);
			this->ProcImg->Name = L"ProcImg";
			this->ProcImg->Size = System::Drawing::Size(375, 244);
			this->ProcImg->TabIndex = 2;
			this->ProcImg->TabStop = false;
			this->ProcImg->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::ProcImg_MouseClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"XCurPoc";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"YCurPos";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(14, 64);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(72, 21);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Eraser";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(14, 98);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(55, 21);
			this->checkBox2->TabIndex = 7;
			this->checkBox2->Text = L"Pen";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(444, 31);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(56, 21);
			this->checkBox3->TabIndex = 9;
			this->checkBox3->Text = L"Red";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(444, 64);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(58, 21);
			this->checkBox4->TabIndex = 10;
			this->checkBox4->Text = L"Blue";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(444, 98);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(70, 21);
			this->checkBox5->TabIndex = 11;
			this->checkBox5->Text = L"Green";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tnickness_nud);
			this->groupBox1->Controls->Add(this->draw_box);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->checkBox5);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Location = System::Drawing::Point(362, 41);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(531, 130);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Drawing";
			// 
			// tnickness_nud
			// 
			this->tnickness_nud->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->tnickness_nud->Location = System::Drawing::Point(209, 63);
			this->tnickness_nud->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 11, 0, 0, 0 });
			this->tnickness_nud->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->tnickness_nud->Name = L"tnickness_nud";
			this->tnickness_nud->Size = System::Drawing::Size(120, 22);
			this->tnickness_nud->TabIndex = 14;
			this->tnickness_nud->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// draw_box
			// 
			this->draw_box->AutoSize = true;
			this->draw_box->Location = System::Drawing::Point(14, 28);
			this->draw_box->Name = L"draw_box";
			this->draw_box->Size = System::Drawing::Size(72, 21);
			this->draw_box->TabIndex = 13;
			this->draw_box->Text = L"DRAW";
			this->draw_box->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(230, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 17);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Thickness";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 451);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ProcImg);
			this->Controls->Add(this->StartImg);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StartImg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProcImg))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tnickness_nud))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Bitmap^ open_img = nullptr;
		Bitmap^ copy_img = nullptr;
		Bitmap^ save_img = nullptr;
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		Bitmap^ open_img = gcnew Bitmap(openFileDialog1->FileName);
		StartImg->Image = open_img;
	}
}

private: System::Void clearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	StartImg->Image = nullptr;
	ProcImg->Image = nullptr;
}

private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (StartImg->Image != nullptr) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;		
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Bitmap^ save_img = gcnew Bitmap(StartImg->Image);
			save_img->Save(saveFileDialog1->FileName);
		}
	}
}
private: System::Void copyImageToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (StartImg->Image != nullptr) {
	    Bitmap^ copy_img = gcnew Bitmap(StartImg->Image);
		ProcImg->Image = copy_img;
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	tnickness_nud->ReadOnly = true;
}
private: System::Void ProcImg_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (ProcImg->Image != nullptr) {
		if (draw_box->Checked == true) {
			int thick = static_cast<int>(tnickness_nud->Value);
			for (int i = -((thick - 1) / 2); i < ((thick - 1) / 2); i++) {
				for (int j = -((thick - 1) / 2); j < ((thick - 1) / 2); j++) {
					if (e->Button == System::Windows::Forms::MouseButtons::Left) {
						//
					}
					else {
						;
					}
				}
			}
		}
		if (draw_box->Checked == false) {
			;
		}
	}	
}
};
};
