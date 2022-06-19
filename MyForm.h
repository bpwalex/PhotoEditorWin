#include <string>
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





	private: System::Windows::Forms::CheckBox^ red_cb;
	private: System::Windows::Forms::CheckBox^ blue_cb;
	private: System::Windows::Forms::CheckBox^ green_cb;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ToolStripMenuItem^ copyImageToolStripMenuItem;
	private: System::Windows::Forms::CheckBox^ draw_cb;


	private: System::Windows::Forms::NumericUpDown^ tnickness_nud;
	private: System::Windows::Forms::Label^ x_pos;
	private: System::Windows::Forms::Label^ y_pos;
	private: System::Windows::Forms::ToolStripMenuItem^ negativeToolStripMenuItem;


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
			this->red_cb = (gcnew System::Windows::Forms::CheckBox());
			this->blue_cb = (gcnew System::Windows::Forms::CheckBox());
			this->green_cb = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tnickness_nud = (gcnew System::Windows::Forms::NumericUpDown());
			this->draw_cb = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->x_pos = (gcnew System::Windows::Forms::Label());
			this->y_pos = (gcnew System::Windows::Forms::Label());
			this->negativeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->filtersToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->negativeToolStripMenuItem });
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
			this->ProcImg->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::ProcImg_MouseMove_1);
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
			// red_cb
			// 
			this->red_cb->AutoSize = true;
			this->red_cb->Location = System::Drawing::Point(444, 31);
			this->red_cb->Name = L"red_cb";
			this->red_cb->Size = System::Drawing::Size(56, 21);
			this->red_cb->TabIndex = 9;
			this->red_cb->Text = L"Red";
			this->red_cb->UseVisualStyleBackColor = true;
			// 
			// blue_cb
			// 
			this->blue_cb->AutoSize = true;
			this->blue_cb->Location = System::Drawing::Point(444, 64);
			this->blue_cb->Name = L"blue_cb";
			this->blue_cb->Size = System::Drawing::Size(58, 21);
			this->blue_cb->TabIndex = 10;
			this->blue_cb->Text = L"Blue";
			this->blue_cb->UseVisualStyleBackColor = true;
			// 
			// green_cb
			// 
			this->green_cb->AutoSize = true;
			this->green_cb->Location = System::Drawing::Point(444, 98);
			this->green_cb->Name = L"green_cb";
			this->green_cb->Size = System::Drawing::Size(70, 21);
			this->green_cb->TabIndex = 11;
			this->green_cb->Text = L"Green";
			this->green_cb->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tnickness_nud);
			this->groupBox1->Controls->Add(this->draw_cb);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->green_cb);
			this->groupBox1->Controls->Add(this->blue_cb);
			this->groupBox1->Controls->Add(this->red_cb);
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
			this->tnickness_nud->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->tnickness_nud->Name = L"tnickness_nud";
			this->tnickness_nud->Size = System::Drawing::Size(120, 22);
			this->tnickness_nud->TabIndex = 14;
			this->tnickness_nud->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// draw_cb
			// 
			this->draw_cb->AutoSize = true;
			this->draw_cb->Location = System::Drawing::Point(14, 28);
			this->draw_cb->Name = L"draw_cb";
			this->draw_cb->Size = System::Drawing::Size(72, 21);
			this->draw_cb->TabIndex = 13;
			this->draw_cb->Text = L"DRAW";
			this->draw_cb->UseVisualStyleBackColor = true;
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
			// x_pos
			// 
			this->x_pos->AutoSize = true;
			this->x_pos->Location = System::Drawing::Point(117, 56);
			this->x_pos->Name = L"x_pos";
			this->x_pos->Size = System::Drawing::Size(0, 17);
			this->x_pos->TabIndex = 13;
			// 
			// y_pos
			// 
			this->y_pos->AutoSize = true;
			this->y_pos->Location = System::Drawing::Point(120, 89);
			this->y_pos->Name = L"y_pos";
			this->y_pos->Size = System::Drawing::Size(0, 17);
			this->y_pos->TabIndex = 14;
			// 
			// negativeToolStripMenuItem
			// 
			this->negativeToolStripMenuItem->Name = L"negativeToolStripMenuItem";
			this->negativeToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->negativeToolStripMenuItem->Text = L"Negative";
			this->negativeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::negativeToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 451);
			this->Controls->Add(this->y_pos);
			this->Controls->Add(this->x_pos);
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
	if (ProcImg->Image != nullptr) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;		
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Bitmap^ save_img = gcnew Bitmap(ProcImg->Image);
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
public:	int q, w, r = 0;
private: System::Void ProcImg_MouseMove_1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (ProcImg->Image != nullptr) {
		Bitmap^ proc_img = gcnew Bitmap(ProcImg->Image);
		int x = e->X;
		x_pos->Text = System::Convert::ToString(e->X);
		y_pos->Text = System::Convert::ToString(e->Y);
		if (draw_cb->Checked == true) {
			if (red_cb->Checked == true) {
				int thick = static_cast<int>(tnickness_nud->Value);
				for (int i = -((thick - 1) / 2); i < ((thick - 1) / 2); i++) {
					for (int j = -((thick - 1) / 2); j < ((thick - 1) / 2); j++) {
						if (e->Button == System::Windows::Forms::MouseButtons::Left) {
							proc_img->SetPixel(e->X + i, e->Y + j, System::Drawing::Color::Red);
							ProcImg->Image = proc_img;
						}
						else {
							;
						}
					}
				}
			}
			//
			else if (blue_cb->Checked == true) {
				int thick = static_cast<int>(tnickness_nud->Value);
				for (int i = -((thick - 1) / 2); i < ((thick - 1) / 2); i++) {
					for (int j = -((thick - 1) / 2); j < ((thick - 1) / 2); j++) {
						if (e->Button == System::Windows::Forms::MouseButtons::Left) {
							if (e->Button == System::Windows::Forms::MouseButtons::Left) {
								proc_img->SetPixel(e->X + i, e->Y + j, System::Drawing::Color::Blue);
								ProcImg->Image = proc_img;
							}
						}
						else {
							;
						}
					}
				}
			}
			//
			else if (green_cb->Checked == true) {
				int thick = static_cast<int>(tnickness_nud->Value);
				for (int i = -((thick - 1) / 2); i < ((thick - 1) / 2); i++) {
					for (int j = -((thick - 1) / 2); j < ((thick - 1) / 2); j++) {
						if (e->Button == System::Windows::Forms::MouseButtons::Left) {
							if (e->Button == System::Windows::Forms::MouseButtons::Left) {
								proc_img->SetPixel(e->X + i, e->Y + j, System::Drawing::Color::Green);
								ProcImg->Image = proc_img;
							}
						}
						else {
							;
						}
					}
				}
			}
			else {
				if (q == 0) {
					MessageBox::Show("Choose color");
					q++;
				}
				
			}
		}
		else {
			if (w == 0) {
				MessageBox::Show("Click on draw option");
				w++;
			}
		}
	}
	else {
		if (r == 0) {
			MessageBox::Show("No processed image");
			r += 1;
		}
	}
}
private: System::Void negativeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ProcImg->Image != nullptr) {
		Bitmap^ neg_img = gcnew Bitmap(ProcImg->Image);
		for (int i = 0; i < neg_img->Width; i++) {
			for (int j = 0; j < neg_img->Height; j++) {
				Color px_color = neg_img->GetPixel(i, j);
				int px_red = 255 - px_color.R;
				int px_green = 255 - px_color.G;
				int px_blue = 255 - px_color.B;
				neg_img->SetPixel(i, j, Color::FromArgb(px_red, px_green, px_blue));
			}
		}
		ProcImg->Image = neg_img;
	}
}
};
};
