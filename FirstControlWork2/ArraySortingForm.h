#include "ArraySortingPresenter.cpp"
#pragma once

namespace FirstControlWork2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ArraySortingForm
	/// </summary>
	public ref class ArraySortingForm : public System::Windows::Forms::Form
	{
	public:
		ArraySortingForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ArraySortingForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label;

	private: ArraySortingPresenter^ presenter;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {

			   this->presenter = gcnew ArraySortingPresenter();

			   this->label = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			   this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label
			   // 
			   this->label->AutoSize = true;
			   this->label->Location = System::Drawing::Point(12, 46);
			   this->label->Name = L"label";
			   this->label->Size = System::Drawing::Size(309, 25);
			   this->label->TabIndex = 0;
			   this->label->Text = L"Длина одномерного массива:";
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(327, 43);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(100, 31);
			   this->textBox1->TabIndex = 1;
			   this->textBox1->Text = L"8";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(12, 88);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(326, 25);
			   this->label1->TabIndex = 2;
			   this->label1->Text = L"Интервал значений массива от";
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(344, 85);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(100, 31);
			   this->textBox2->TabIndex = 3;
			   this->textBox2->Text = L"-100";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(450, 91);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(36, 25);
			   this->label2->TabIndex = 4;
			   this->label2->Text = L"до";
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(492, 88);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(100, 31);
			   this->textBox3->TabIndex = 5;
			   this->textBox3->Text = L"99";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(12, 167);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(196, 25);
			   this->label3->TabIndex = 6;
			   this->label3->Text = L"Исходный массив:";
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->AllowUserToDeleteRows = false;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			   this->dataGridView1->Location = System::Drawing::Point(17, 204);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->ReadOnly = true;
			   this->dataGridView1->RowHeadersWidth = 82;
			   this->dataGridView1->RowTemplate->Height = 33;
			   this->dataGridView1->Size = System::Drawing::Size(287, 528);
			   this->dataGridView1->TabIndex = 7;
			   // 
			   // Column1
			   // 
			   this->Column1->HeaderText = L"Значения";
			   this->Column1->MinimumWidth = 10;
			   this->Column1->Name = L"Column1";
			   this->Column1->ReadOnly = true;
			   this->Column1->Width = 200;
			   // 
			   // dataGridView2
			   // 
			   this->dataGridView2->AllowUserToDeleteRows = false;
			   this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->dataGridViewTextBoxColumn1 });
			   this->dataGridView2->Location = System::Drawing::Point(746, 204);
			   this->dataGridView2->Name = L"dataGridView2";
			   this->dataGridView2->ReadOnly = true;
			   this->dataGridView2->RowHeadersWidth = 82;
			   this->dataGridView2->RowTemplate->Height = 33;
			   this->dataGridView2->Size = System::Drawing::Size(287, 528);
			   this->dataGridView2->TabIndex = 8;
			   // 
			   // dataGridViewTextBoxColumn1
			   // 
			   this->dataGridViewTextBoxColumn1->HeaderText = L"Значения";
			   this->dataGridViewTextBoxColumn1->MinimumWidth = 10;
			   this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			   this->dataGridViewTextBoxColumn1->ReadOnly = true;
			   this->dataGridViewTextBoxColumn1->Width = 200;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(741, 167);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(269, 25);
			   this->label4->TabIndex = 9;
			   this->label4->Text = L"Результирующий массив:";
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(410, 227);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(256, 77);
			   this->button1->TabIndex = 10;
			   this->button1->Text = L"Создать массив";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &ArraySortingForm::create_array_click);
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(410, 329);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(256, 77);
			   this->button2->TabIndex = 11;
			   this->button2->Text = L"Обработать массив";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &ArraySortingForm::sort_data_click);
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(410, 438);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(256, 77);
			   this->button3->TabIndex = 12;
			   this->button3->Text = L"Очистить данные";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &ArraySortingForm::clear_data_click);
			   // 
			   // ArraySortingForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1065, 806);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->dataGridView2);
			   this->Controls->Add(this->dataGridView1);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label);
			   this->Name = L"ArraySortingForm";
			   this->Text = L"ArraySortingForm";
			   this->Load += gcnew System::EventHandler(this, &ArraySortingForm::ArraySortingForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	
	private: System::Void create_array_click(System::Object^ sender, System::EventArgs^ e) {
		this->presenter->ArrayLength = Convert::ToInt32(textBox1->Text);
		this->presenter->minValue = Convert::ToInt32(textBox2->Text);
		this->presenter->maxValue = Convert::ToInt32(textBox3->Text);

		this->presenter->createData();

		dataGridView1->Columns->Add("Values", "Значения");
		for (int j = 0; j < this->presenter->ArrayLength; j++) {
			dataGridView1->Rows->Add();
			dataGridView1->Rows[j]->Cells[0]->Value = this->presenter->mainArray[j];
		}
	}


	private: System::Void clear_data_click(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->Columns->Clear();
		dataGridView2->Columns->Clear();
	}

	private: System::Void sort_data_click(System::Object^ sender, System::EventArgs^ e) {
		this->presenter->sortData();

		dataGridView2->Columns->Add("Values", "Значения");
		for (int j = 0; j < this->presenter->ArrayLength; j++) {
			dataGridView2->Rows->Add();
			dataGridView2->Rows[j]->Cells[0]->Value = this->presenter->mainArray[j];
		}
	}

private: System::Void ArraySortingForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}