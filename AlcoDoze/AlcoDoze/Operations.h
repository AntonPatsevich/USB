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
			this->metroToolTip1 = (gcnew MetroFramework::Components::MetroToolTip());
			this->metroLabel5 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metrobutton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroLabel4 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel3 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroComboBox2 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroComboBox1 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroLabel6 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->SuspendLayout();
			// 
			// metroToolTip1
			// 
			this->metroToolTip1->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroToolTip1->StyleManager = nullptr;
			this->metroToolTip1->Theme = MetroFramework::MetroThemeStyle::Light;
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
			this->metrobutton1->Location = System::Drawing::Point(291, 263);
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
			this->metroLabel4->Location = System::Drawing::Point(125, 207);
			this->metroLabel4->Name = L"metroLabel4";
			this->metroLabel4->Size = System::Drawing::Size(64, 19);
			this->metroLabel4->TabIndex = 48;
			this->metroLabel4->Text = L"Напиток:";
			this->metroLabel4->Theme = MetroFramework::MetroThemeStyle::Dark;
			// 
			// metroLabel3
			// 
			this->metroLabel3->AutoSize = true;
			this->metroLabel3->Location = System::Drawing::Point(72, 168);
			this->metroLabel3->Name = L"metroLabel3";
			this->metroLabel3->Size = System::Drawing::Size(117, 19);
			this->metroLabel3->TabIndex = 47;
			this->metroLabel3->Text = L"Выпито алкоголя:";
			this->metroLabel3->Theme = MetroFramework::MetroThemeStyle::Dark;
			// 
			// metroLabel2
			// 
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->Location = System::Drawing::Point(156, 134);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(33, 19);
			this->metroLabel2->TabIndex = 46;
			this->metroLabel2->Text = L"Вес:";
			this->metroLabel2->Theme = MetroFramework::MetroThemeStyle::Dark;
			// 
			// metroLabel1
			// 
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->Location = System::Drawing::Point(156, 84);
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
			this->metroComboBox2->Location = System::Drawing::Point(212, 207);
			this->metroComboBox2->Name = L"metroComboBox2";
			this->metroComboBox2->Size = System::Drawing::Size(166, 29);
			this->metroComboBox2->TabIndex = 44;
			this->metroComboBox2->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroComboBox2->UseSelectable = true;
			// 
			// metroComboBox1
			// 
			this->metroComboBox1->FormattingEnabled = true;
			this->metroComboBox1->ItemHeight = 23;
			this->metroComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Мужчина", L"Женщина" });
			this->metroComboBox1->Location = System::Drawing::Point(212, 84);
			this->metroComboBox1->Name = L"metroComboBox1";
			this->metroComboBox1->Size = System::Drawing::Size(166, 29);
			this->metroComboBox1->TabIndex = 43;
			this->metroComboBox1->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroComboBox1->UseSelectable = true;
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
			this->metroTextBox2->Lines = gcnew cli::array< System::String^  >(1) { L"Выпито в граммах(мл.)" };
			this->metroTextBox2->Location = System::Drawing::Point(212, 168);
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
			this->metroTextBox2->Text = L"Выпито в граммах(мл.)";
			this->metroTextBox2->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroTextBox2->UseSelectable = true;
			this->metroTextBox2->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox2->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
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
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(1) { L"Введите вес" };
			this->metroTextBox1->Location = System::Drawing::Point(212, 130);
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
			this->metroTextBox1->Text = L"Введите вес";
			this->metroTextBox1->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroTextBox1->UseSelectable = true;
			this->metroTextBox1->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox1->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
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
			this->metroButton2->Location = System::Drawing::Point(156, 263);
			this->metroButton2->Name = L"metroButton2";
			this->metroButton2->Size = System::Drawing::Size(75, 23);
			this->metroButton2->TabIndex = 51;
			this->metroButton2->Text = L"metroButton2";
			this->metroButton2->UseSelectable = true;
			this->metroButton2->Click += gcnew System::EventHandler(this, &Operations::metroButton2_Click);
			// 
			// Operations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(450, 370);
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
		void operations(double res, double c, double a, double m, double s)
		{
			double  r, *c, *a, m, ml;
			const double p = 0.7893;
			char *s;
			drunks(&res);
			switch (metroComboBox1->SelectedIndex)
			{
			case 0:
				s[] = "Мужской";
				r = 0.70;
				m = Convert::ToDouble(metroTextBox1->Text);
				ml = Convert::ToDouble(metroTextBox2->Text);
				a = ml * p * res - 0.20;
				c = a / m * r;
				metroLabel6->Text = Convert::ToString(c);
				printonfile(&res, &c, &a, &m, &s);
				break;
			case 1:
				s[] = "Женский";
				r = 0.60;
				m = Convert::ToDouble(metroTextBox1->Text);
				ml = Convert::ToDouble(metroTextBox2->Text);
				a = ml * p * res - 0.20;
				c = a / m * r;
				metroLabel6->Text = Convert::ToString(c);
				printonfile(&res, &c, &a, &m, &s);
				break;
			default:
				MessageBox::Show("Выберите пол", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				break;
			}
		}
		void printonfile(double* res, double* c, double* a, double* m, double* s)
		{
			std:: ofstream out;          // поток для записи
			out.open("D:\\Report.doc"); // окрываем файл для записи
			if (out.is_open())
			{
				out << "Пол:" << s << std::endl;
				out << "Вес:" << m << std::endl;
				out << "Процентное содержание алкоголя в выбранном напитке:" << res*100 << std::endl;
				out << "Процент чистого алкоголя в выбранном напитке:" << a << std::endl;
				out << "Концентрация алкоголя в крови:" << c << std::endl;
			}
		
		}


	private: System::Void Operations_Load(System::Object^ sender, System::EventArgs^ e) {


		metroToolTip1->SetToolTip(metroComboBox2, "Выберите напиток");
		metroToolTip1->IsBalloon = true;
	}

	private: System::Void metrobutton1_Click(System::Object^ sender, System::EventArgs^ e) {
		double res;
		operations(res, c, a, m, s);
	}

	private: System::Void metroButton2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
