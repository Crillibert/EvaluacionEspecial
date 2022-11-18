#pragma once
#include "listaDoble.h"
namespace EvaluacionEspecial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		listaDoble^ numero1 = gcnew listaDoble;
	private: System::Windows::Forms::TextBox^ textBox_num2;
	public:

	public:
		listaDoble^ numero2 = gcnew listaDoble;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	public:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownB;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownA;
		   listaDoble^ numero3 = gcnew listaDoble;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}



	protected:

	protected:

	private: System::Windows::Forms::Button^ button1;













	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_num1;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_num1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_num2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDownB = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownA = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(128, 94);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Sumar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(409, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Resultado: ";
			// 
			// textBox_num1
			// 
			this->textBox_num1->Location = System::Drawing::Point(51, 31);
			this->textBox_num1->Name = L"textBox_num1";
			this->textBox_num1->Size = System::Drawing::Size(220, 20);
			this->textBox_num1->TabIndex = 10;
			// 
			// textBox_num2
			// 
			this->textBox_num2->Location = System::Drawing::Point(51, 68);
			this->textBox_num2->Name = L"textBox_num2";
			this->textBox_num2->Size = System::Drawing::Size(220, 20);
			this->textBox_num2->TabIndex = 11;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Enabled = false;
			this->numericUpDown1->Location = System::Drawing::Point(327, 175);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 12;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Enabled = false;
			this->numericUpDown2->Location = System::Drawing::Point(453, 175);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 13;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Enabled = false;
			this->numericUpDown3->Location = System::Drawing::Point(327, 201);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(120, 20);
			this->numericUpDown3->TabIndex = 14;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Enabled = false;
			this->numericUpDown4->Location = System::Drawing::Point(453, 201);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(120, 20);
			this->numericUpDown4->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Operar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDownB
			// 
			this->numericUpDownB->Enabled = false;
			this->numericUpDownB->Location = System::Drawing::Point(2, 201);
			this->numericUpDownB->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->numericUpDownB->Name = L"numericUpDownB";
			this->numericUpDownB->Size = System::Drawing::Size(120, 20);
			this->numericUpDownB->TabIndex = 18;
			// 
			// numericUpDownA
			// 
			this->numericUpDownA->Enabled = false;
			this->numericUpDownA->Location = System::Drawing::Point(2, 175);
			this->numericUpDownA->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->numericUpDownA->Name = L"numericUpDownA";
			this->numericUpDownA->Size = System::Drawing::Size(120, 20);
			this->numericUpDownA->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(585, 261);
			this->Controls->Add(this->numericUpDownB);
			this->Controls->Add(this->numericUpDownA);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox_num2);
			this->Controls->Add(this->textBox_num1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownA))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		String^ sumaRecursiva(int longitud1, int longitud2)
		{
			if (longitud1 == 0 || longitud2 == 0)
			{
				return "0";
			}
			else
			{
				int valor1 = Convert::ToInt16(numero1->Ver(longitud1));
				int valor2 = Convert::ToInt16(numero1->Ver(longitud1));
				int valor3 = valor1 + valor2;
				if (valor3 >= 10)
				{
					String^ valortemp = Convert::ToString(valor3);
					numero1->reemplazar(Convert::ToString(valortemp[1]), valor1);
				}
			}
		}
		int valorC(int A, int B, int opt, int c)
		{
			if (c>0)
			{
				return c;
			}
			else
			{

			}
		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		String^ cientos1;
		String^ miles1;
		String^ millones1;
		String^ milesdemillones1;
		String^ num1 = textBox_num1->Text;
		String^ num2 = textBox_num2->Text;
		for (int i = 0; i < num1->Length; i++)
		{
			numero1->InsertarNuevo(Convert::ToString(num1[i]));
		}
		for (int i = 0; i < num2->Length; i++)
		{
			numero2->InsertarNuevo(Convert::ToString(num2[i]));
		}
		int longitud = numero1->dimension();
		int longitud2 = numero2->dimension();
		numero3;
		for (int i = longitud; i > 0; i--)
		{
			int valor1 = Convert::ToInt16(numero1->Ver(longitud));
			int valor2 = Convert::ToInt16(numero1->Ver(longitud2));
			int valor3 = valor1 + valor2;
			String^ valortemp = Convert::ToString(valor3);
			if (valor3 >= 10)
			{

				String^ tempt = numero1->Ver(longitud - 1);
				int valortempt = Convert::ToInt16 (tempt);

			}

		}
		for (int i = numero3->dimension(); i > 0; i--)
		{
			label1->Text = label1->Text + numero3->Ver(i);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int valorA = Convert::ToInt16(numericUpDownA->Text);
		int valorB = Convert::ToInt16(numericUpDownB->Text);
		int valorOpt = 1;
		int valorC = 0;
		bool completo = true;
		while (completo)
		{
			valorC = valorA - ((valorA / valorB) * valorB);
			valorOpt = valorA - ((valorA / valorB) * valorOpt);
			valorA = valorB
			while ( valorC <= 0)
			{
				valorC + valorA;
			}
		}
	}
};
}
