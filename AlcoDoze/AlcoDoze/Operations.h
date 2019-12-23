#pragma once
#include <fstream>
#include <string>

namespace AlcoDoze {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MetroFramework::Forms;
	using namespace std;

	/// <summary>
	/// Сводка для Operations
	/// </summary>
	public ref class Operations : public MetroForm
	{
	public:
		Operations(void)
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
		~Operations()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:


	private: MetroFramework::Components::MetroToolTip^ metroToolTip1;
	private: MetroFramework::Controls::MetroLabel^ metroLabel5;
	private: MetroFramework::Controls::MetroButton^ metrobutton1;
	private: MetroFramework::Controls::MetroLabel^ metroLabel4;
	private: MetroFramework::Controls::MetroLabel^ metroLabel3;
	private: MetroFramework::Controls::MetroLabel^ metroLabel2;
	private: MetroFramework::Controls::MetroLabel^ metroLabel1;
	private: MetroFramework::Controls::MetroComboBox^ metroComboBox2;
	private: MetroFramework::Controls::MetroComboBox^ metroComboBox1;
	private: MetroFramework::Controls::MetroTextBox^ metroTextBox2;
	private: MetroFramework::Controls::MetroTextBox^ metroTextBox1;
	private: MetroFramework::Controls::MetroLabel^ metroLabel6;
	private: MetroFramework::Controls::MetroButton^  metroButton2;
	private: MetroFramework::Controls::MetroButton^ metroButton5;
	private: MetroFramework::Controls::MetroButton^ metroButton4;
	private: MetroFramework::Components::MetroToolTip^ metroToolTip2;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Operations::typeid));
			this->metroToolTip1 = (gcnew MetroFramework::Components::MetroToolTip());
			this->metroComboBox1 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroLabel5 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metrobutton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroLabel4 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel3 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroComboBox2 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLabel6 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton5 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton4 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroToolTip2 = (gcnew MetroFramework::Components::MetroToolTip());
			this->SuspendLayout();
			// 
			// metroToolTip1
			// 
			this->metroToolTip1->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroToolTip1->StyleManager = nullptr;
			this->metroToolTip1->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroToolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &Operations::metroToolTip1_Popup);
			// 
			// metroComboBox1
			// 
			this->metroComboBox1->FormattingEnabled = true;
			this->metroComboBox1->ItemHeight = 23;
			this->metroComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Мужчина", L"Женщина" });
			this->metroComboBox1->Location = System::Drawing::Point(194, 89);
			this->metroComboBox1->Name = L"metroComboBox1";
			this->metroComboBox1->Size = System::Drawing::Size(166, 29);
			this->metroComboBox1->TabIndex = 43;
			this->metroComboBox1->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroToolTip1->SetToolTip(this->metroComboBox1, L"Выберите Пол");
			this->metroComboBox1->UseSelectable = true;
			// 
			// metroLabel5
			// 
			this->metroLabel5->AutoSize = true;
			this->metroLabel5->Location = System::Drawing::Point(202, 266);
			this->metroLabel5->Name = L"metroLabel5";
			this->metroLabel5->Size = System::Drawing::Size(0, 0);
			this->metroLabel5->TabIndex = 11;
			this->metroLabel5->Theme = MetroFramework::MetroThemeStyle::Dark;
			// 
			// metrobutton1
			// 
			this->metrobutton1->AllowDrop = true;
			this->metrobutton1->Location = System::Drawing::Point(302, 266);
			this->metrobutton1->Name = L"metrobutton1";
			this->metrobutton1->Size = System::Drawing::Size(75, 23);
			this->metrobutton1->TabIndex = 49;
			this->metrobutton1->Text = L"Рассчитать";
			this->metrobutton1->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metrobutton1->UseSelectable = true;
			this->metrobutton1->Click += gcnew System::EventHandler(this, &Operations::metrobutton1_Click);
			// 
			// metroLabel4
			// 
			this->metroLabel4->AutoSize = true;
			this->metroLabel4->Location = System::Drawing::Point(107, 222);
			this->metroLabel4->Name = L"metroLabel4";
			this->metroLabel4->Size = System::Drawing::Size(64, 19);
			this->metroLabel4->TabIndex = 48;
			this->metroLabel4->Text = L"Напиток:";
			this->metroLabel4->Theme = MetroFramework::MetroThemeStyle::Dark;
			// 
			// metroLabel3
			// 
			this->metroLabel3->AutoSize = true;
			this->metroLabel3->Location = System::Drawing::Point(54, 173);
			this->metroLabel3->Name = L"metroLabel3";
			this->metroLabel3->Size = System::Drawing::Size(117, 19);
			this->metroLabel3->TabIndex = 47;
			this->metroLabel3->Text = L"Выпито алкоголя:";
			this->metroLabel3->Theme = MetroFramework::MetroThemeStyle::Dark;
			// 
			// metroLabel2
			// 
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->Location = System::Drawing::Point(138, 139);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(33, 19);
			this->metroLabel2->TabIndex = 46;
			this->metroLabel2->Text = L"Вес:";
			this->metroLabel2->Theme = MetroFramework::MetroThemeStyle::Dark;
			// 
			// metroLabel1
			// 
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->Location = System::Drawing::Point(138, 99);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(36, 19);
			this->metroLabel1->TabIndex = 45;
			this->metroLabel1->Text = L"Пол:";
			this->metroLabel1->Theme = MetroFramework::MetroThemeStyle::Dark;
			// 
			// metroComboBox2
			// 
			this->metroComboBox2->FormattingEnabled = true;
			this->metroComboBox2->ItemHeight = 23;
			this->metroComboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(16) {
				L"Безалкогольное пиво(0,5%)", L"Пиво крепкое(8%)",
					L"Шампанское(10%)", L"Вино(12%)", L"Вермут(Мартини и пр 15%)", L"Мягкие ликеры(17%)", L"Портвейн/Средние ликеры(20%)", L"Крепкие ликеры (35%)",
					L"Текила/Бренди (38%)", L"Ром/Джин (39%)", L"Водка/Виски/Бурбон/Коньяк/Бурбон/Скотч(40%)", L"Абсент Легкий(60%)", L"Абсент Средний(69%)",
					L"Настойка боярышника(70%)", L"Абсент Крепкий(80%)", L"Чистый спирт(95%)"
			});
			this->metroComboBox2->Location = System::Drawing::Point(194, 212);
			this->metroComboBox2->Name = L"metroComboBox2";
			this->metroComboBox2->Size = System::Drawing::Size(166, 29);
			this->metroComboBox2->TabIndex = 44;
			this->metroComboBox2->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroComboBox2->UseSelectable = true;
			// 
			// metroTextBox2
			// 
			// 
			// 
			// 
			this->metroTextBox2->CustomButton->Image = nullptr;
			this->metroTextBox2->CustomButton->Location = System::Drawing::Point(144, 1);
			this->metroTextBox2->CustomButton->Name = L"";
			this->metroTextBox2->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox2->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox2->CustomButton->TabIndex = 1;
			this->metroTextBox2->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox2->CustomButton->UseSelectable = true;
			this->metroTextBox2->CustomButton->Visible = false;
			this->metroTextBox2->Lines = gcnew cli::array< System::String^  >(0);
			this->metroTextBox2->Location = System::Drawing::Point(194, 173);
			this->metroTextBox2->MaxLength = 32767;
			this->metroTextBox2->Name = L"metroTextBox2";
			this->metroTextBox2->PasswordChar = '\0';
			this->metroTextBox2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox2->SelectedText = L"";
			this->metroTextBox2->SelectionLength = 0;
			this->metroTextBox2->SelectionStart = 0;
			this->metroTextBox2->ShortcutsEnabled = true;
			this->metroTextBox2->Size = System::Drawing::Size(166, 23);
			this->metroTextBox2->TabIndex = 42;
			this->metroTextBox2->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroToolTip2->SetToolTip(this->metroTextBox2, L"Введите количество выпитого в (мл.)");
			this->metroTextBox2->UseSelectable = true;
			this->metroTextBox2->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox2->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			this->metroTextBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Operations::metroTextBox2_KeyPress);
			// 
			// metroTextBox1
			// 
			// 
			// 
			// 
			this->metroTextBox1->CustomButton->Image = nullptr;
			this->metroTextBox1->CustomButton->Location = System::Drawing::Point(144, 1);
			this->metroTextBox1->CustomButton->Name = L"";
			this->metroTextBox1->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox1->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox1->CustomButton->TabIndex = 1;
			this->metroTextBox1->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox1->CustomButton->UseSelectable = true;
			this->metroTextBox1->CustomButton->Visible = false;
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(0);
			this->metroTextBox1->Location = System::Drawing::Point(194, 135);
			this->metroTextBox1->MaxLength = 32767;
			this->metroTextBox1->Name = L"metroTextBox1";
			this->metroTextBox1->PasswordChar = '\0';
			this->metroTextBox1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox1->SelectedText = L"";
			this->metroTextBox1->SelectionLength = 0;
			this->metroTextBox1->SelectionStart = 0;
			this->metroTextBox1->ShortcutsEnabled = true;
			this->metroTextBox1->Size = System::Drawing::Size(166, 23);
			this->metroTextBox1->TabIndex = 41;
			this->metroTextBox1->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroToolTip2->SetToolTip(this->metroTextBox1, L"Ввведите вес");
			this->metroTextBox1->UseSelectable = true;
			this->metroTextBox1->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox1->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			this->metroTextBox1->TextChanged += gcnew System::EventHandler(this, &Operations::metroTextBox1_TextChanged);
			this->metroTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Operations::metroTextBox1_KeyPress);
			// 
			// metroLabel6
			// 
			this->metroLabel6->AutoSize = true;
			this->metroLabel6->Location = System::Drawing::Point(156, 263);
			this->metroLabel6->Name = L"metroLabel6";
			this->metroLabel6->Size = System::Drawing::Size(0, 0);
			this->metroLabel6->TabIndex = 50;
			this->metroLabel6->Theme = MetroFramework::MetroThemeStyle::Dark;
			// 
			// metroButton2
			// 
			this->metroButton2->Location = System::Drawing::Point(81, 266);
			this->metroButton2->Name = L"metroButton2";
			this->metroButton2->Size = System::Drawing::Size(75, 23);
			this->metroButton2->TabIndex = 51;
			this->metroButton2->Text = L"Отчет";
			this->metroButton2->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroButton2->UseSelectable = true;
			this->metroButton2->Click += gcnew System::EventHandler(this, &Operations::metroButton2_Click);
			// 
			// metroButton5
			// 
			this->metroButton5->BackColor = System::Drawing::Color::Black;
			this->metroButton5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"metroButton5.BackgroundImage")));
			this->metroButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->metroButton5->DisplayFocus = true;
			this->metroButton5->Location = System::Drawing::Point(90, 324);
			this->metroButton5->Name = L"metroButton5";
			this->metroButton5->Size = System::Drawing::Size(30, 23);
			this->metroButton5->TabIndex = 53;
			this->metroButton5->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroButton5->UseSelectable = true;
			this->metroButton5->UseStyleColors = true;
			// 
			// metroButton4
			// 
			this->metroButton4->BackColor = System::Drawing::Color::White;
			this->metroButton4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"metroButton4.BackgroundImage")));
			this->metroButton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->metroButton4->DisplayFocus = true;
			this->metroButton4->Location = System::Drawing::Point(45, 324);
			this->metroButton4->Name = L"metroButton4";
			this->metroButton4->Size = System::Drawing::Size(30, 23);
			this->metroButton4->TabIndex = 52;
			this->metroButton4->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroButton4->UseSelectable = true;
			this->metroButton4->UseStyleColors = true;
			// 
			// metroToolTip2
			// 
			this->metroToolTip2->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroToolTip2->StyleManager = nullptr;
			this->metroToolTip2->Theme = MetroFramework::MetroThemeStyle::Light;
			// 
			// Operations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(450, 370);
			this->Controls->Add(this->metroButton5);
			this->Controls->Add(this->metroButton4);
			this->Controls->Add(this->metroButton2);
			this->Controls->Add(this->metroLabel6);
			this->Controls->Add(this->metrobutton1);
			this->Controls->Add(this->metroLabel4);
			this->Controls->Add(this->metroLabel3);
			this->Controls->Add(this->metroLabel2);
			this->Controls->Add(this->metroLabel1);
			this->Controls->Add(this->metroComboBox2);
			this->Controls->Add(this->metroComboBox1);
			this->Controls->Add(this->metroTextBox2);
			this->Controls->Add(this->metroTextBox1);
			this->Controls->Add(this->metroLabel5);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MaximumSize = System::Drawing::Size(450, 370);
			this->MinimumSize = System::Drawing::Size(450, 370);
			this->Name = L"Operations";
			this->Padding = System::Windows::Forms::Padding(0, 60, 0, 0);
			this->ShowIcon = false;
			this->Text = L"AlcoDoze | Operations";
			this->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->Load += gcnew System::EventHandler(this, &Operations::Operations_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		void drunks(double* res)
		{
			
			if (metroComboBox2->SelectedIndex != -1)
			{

				switch (metroComboBox2->SelectedIndex)
				{
				case 0:
					*res = 0.005;

					break;
				case 1:
					*res = 0.08;

					break;
				case 2:
					*res = 0.1;

					break;
				case 3:
					*res = 0.12;

					break;
				case 4:
					*res = 0.15;

					break;
				case 5:
					*res = 0.17;

					break;
				case 6:
					*res = 0.20;
					break;
				case 7:
					*res = 0.35;

					break;
				case 8:
					*res = 0.38;

					break;
				case 9:
					*res = 0.39;

					break;
				case 10:
					*res = 0.40;

					break;
				case 11:
					*res = 0.60;

					break;
				case 12:
					*res = 0.69;

					break;
				case 13:
					*res = 0.70;

					break;
				case 14:
					*res = 0.80;

					break;
				case 15:
					*res = 0.95;

					break;
				default:
					MessageBox::Show("Выберите напиток", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					break;
				}
			}
			else {
				MessageBox::Show("Выберите напиток", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		void operations(double res, double* a, double* m, double* c, double* s)
		{

			
				double  r, ml;
				const double p = 0.7893;
				drunks(&res);
				switch (metroComboBox1->SelectedIndex)
				{
				case 0:
					*s = metroComboBox1->SelectedIndex;
					r = 0.70;
					*m = Convert::ToDouble(metroTextBox1->Text);
					ml = Convert::ToDouble(metroTextBox2->Text);
					*a = ml * p * res - 0.20;
					*c = *a / (*m) * r;
					/*metroLabel6->Text = Convert::ToString(c);*/
					break;
				case 1:
					*s = metroComboBox1->SelectedIndex;
					r = 0.60;
					*m = Convert::ToDouble(metroTextBox1->Text);
					ml = Convert::ToDouble(metroTextBox2->Text);
					*a = ml * p * res - 0.20;
					*c = *a / (*m) * r;
					/*	metroLabel6->Text = Convert::ToString(c);*/

					break;
				default:
					MessageBox::Show("Выберите пол", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					break;
				}
			
		}
	
		void printonfile(double res, double c, double a, double m, double s)
		{
			drunks(&res);
			operations(res, &a, &m, &c, &s);
			
			
			char* b_sex = "Мужской";
			char* g_sex = "Женский";
			std:: ofstream out;         
			out.open("D:\\Report.doc"); 
			if (out.is_open())
			{
				if (s == 0) {
					out << "Пол:" << b_sex << std::endl;
				}
				else {
					out << "Пол:" << g_sex << std::endl;
				}
				
				out << "Вес:" << m << std::endl;
				out << "Процентное содержание алкоголя в выбранном напитке:" << res *100 << std::endl;
				out << "Процент чистого алкоголя в выбранном напитке:" << a << std::endl;
				out << "Концентрация алкоголя в крови:" << c << std::endl;
			}
		
		}


	private: System::Void Operations_Load(System::Object^ sender, System::EventArgs^ e) {


		metroToolTip1->SetToolTip(metroComboBox2, "Выберите напиток");
		metroToolTip1->IsBalloon = true;
	}

	private: System::Void metrobutton1_Click(System::Object^ sender, System::EventArgs^ e) {
		double res, a, m, c,s;
		if (metroTextBox1->Text == "" || metroTextBox2->Text == "")
		{ 
			MessageBox::Show("Заполните поля", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Error);
			metroLabel6->Text = Convert::ToString("0");
		}
		else
		{
			operations(res, &a, &m, &c, &s);
			metroLabel6->Text = Convert::ToString(c);
			
		}
	}

	private: System::Void metroButton2_Click(System::Object^  sender, System::EventArgs^  e) {
		double res, c, a, m,s;
	
		printonfile(res, c, a, m, s);
	}
		   
private: System::Void metroTextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
		return;
	}
	if (e->KeyChar == '.' || e->KeyChar == ',')
	{
		
		e->KeyChar = ',';
		
		if (metroTextBox1->Text->IndexOf(',') != -1)
		{
			e->Handled = true;
			return;
		}
	}

	if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != ',')
	{
		e->Handled = true;
		return;
	}
			
}
private: System::Void metroTextBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
	{
		return;
	}
	if (e->KeyChar == '.' || e->KeyChar == ',')
	{
	
		e->KeyChar = ',';
		if (metroTextBox1->Text->IndexOf(',') != -1)
		{
			e->Handled = true;
			return;
		}
	}

	if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != ',')
	{
		e->Handled = true;
		return;
	}
}
private: System::Void metroToolTip1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
}
private: System::Void metroTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	//metrobutton1->Enabled = metroTextBox1->Text = ;
}
};
}
