#pragma once

namespace PhotoEditorWin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ drawingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eraserToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pencilToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ StartImg;
	private: System::Windows::Forms::PictureBox^ ProcImg;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->filtersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drawingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eraserToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pencilToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->StartImg = (gcnew System::Windows::Forms::PictureBox());
			this->ProcImg = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StartImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProcImg))->BeginInit();
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
					this->saveAsToolStripMenuItem, this->clearToolStripMenuItem, this->filtersToolStripMenuItem, this->drawingToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(876, 28);
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
			// drawingToolStripMenuItem
			// 
			this->drawingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->eraserToolStripMenuItem,
					this->pencilToolStripMenuItem
			});
			this->drawingToolStripMenuItem->Name = L"drawingToolStripMenuItem";
			this->drawingToolStripMenuItem->Size = System::Drawing::Size(79, 24);
			this->drawingToolStripMenuItem->Text = L"Drawing";
			// 
			// eraserToolStripMenuItem
			// 
			this->eraserToolStripMenuItem->Name = L"eraserToolStripMenuItem";
			this->eraserToolStripMenuItem->Size = System::Drawing::Size(132, 26);
			this->eraserToolStripMenuItem->Text = L"Eraser";
			// 
			// pencilToolStripMenuItem
			// 
			this->pencilToolStripMenuItem->Name = L"pencilToolStripMenuItem";
			this->pencilToolStripMenuItem->Size = System::Drawing::Size(132, 26);
			this->pencilToolStripMenuItem->Text = L"Pencil";
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
			this->ProcImg->Location = System::Drawing::Point(466, 188);
			this->ProcImg->Name = L"ProcImg";
			this->ProcImg->Size = System::Drawing::Size(375, 244);
			this->ProcImg->TabIndex = 2;
			this->ProcImg->TabStop = false;
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(876, 498);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ProcImg);
			this->Controls->Add(this->StartImg);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StartImg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ProcImg))->EndInit();
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
	if (StartImg->Image != nullptr) {
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;		
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{

			Bitmap^ save_img = gcnew Bitmap(StartImg->Image);
			save_img->Save(saveFileDialog1->FileName);
		}
	}
}
	};
};
