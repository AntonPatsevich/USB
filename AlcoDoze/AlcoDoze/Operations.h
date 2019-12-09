#pragma once

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
	private: MetroFramework::Controls::MetroButton^  metrobutton1;
	protected:

	protected:

	protected:
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox1;
	private: MetroFramework::Controls::MetroTextBox^  metroTextBox2;

	private: MetroFramework::Controls::MetroComboBox^  metroComboBox1;
	private: MetroFramework::Controls::MetroComboBox^  metroComboBox2;
	private: MetroFramework::Controls::MetroLabel^  metroLabel1;
	private: MetroFramework::Controls::MetroLabel^  metroLabel2;
	private: MetroFramework::Controls::MetroLabel^  metroLabel3;
	private: MetroFramework::Controls::MetroLabel^  metroLabel4;
	private: MetroFramework::Controls::MetroLabel^  metroLabel5;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->metrobutton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroTextBox1 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroTextBox2 = (gcnew MetroFramework::Controls::MetroTextBox());
			this->metroComboBox1 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroComboBox2 = (gcnew MetroFramework::Controls::MetroComboBox());
			this->metroLabel1 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel2 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel3 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel4 = (gcnew MetroFramework::Controls::MetroLabel());
			this->metroLabel5 = (gcnew MetroFramework::Controls::MetroLabel());
			this->SuspendLayout();
			// 
			// metrobutton1
			// 
			this->metrobutton1->Location = System::Drawing::Point(287, 301);
			this->metrobutton1->Name = L"metrobutton1";
			this->metrobutton1->Size = System::Drawing::Size(75, 23);
			this->metrobutton1->TabIndex = 0;
			this->metrobutton1->Text = L"Рассчитать";
			this->metrobutton1->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metrobutton1->UseSelectable = true;
			this->metrobutton1->Click += gcnew System::EventHandler(this, &Operations::metrobutton1_Click);
			// 
			// metroTextBox1
			// 
			// 
			// 
			// 
			this->metroTextBox1->CustomButton->Image = nullptr;
			this->metroTextBox1->CustomButton->Location = System::Drawing::Point(99, 1);
			this->metroTextBox1->CustomButton->Name = L"";
			this->metroTextBox1->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox1->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox1->CustomButton->TabIndex = 1;
			this->metroTextBox1->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox1->CustomButton->UseSelectable = true;
			this->metroTextBox1->CustomButton->Visible = false;
			this->metroTextBox1->Lines = gcnew cli::array< System::String^  >(1) { L"Введите вес" };
			this->metroTextBox1->Location = System::Drawing::Point(196, 140);
			this->metroTextBox1->MaxLength = 32767;
			this->metroTextBox1->Name = L"metroTextBox1";
			this->metroTextBox1->PasswordChar = '\0';
			this->metroTextBox1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox1->SelectedText = L"";
			this->metroTextBox1->SelectionLength = 0;
			this->metroTextBox1->SelectionStart = 0;
			this->metroTextBox1->ShortcutsEnabled = true;
			this->metroTextBox1->Size = System::Drawing::Size(121, 23);
			this->metroTextBox1->TabIndex = 1;
			this->metroTextBox1->Text = L"Введите вес";
			this->metroTextBox1->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroTextBox1->UseSelectable = true;
			this->metroTextBox1->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox1->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroTextBox2
			// 
			// 
			// 
			// 
			this->metroTextBox2->CustomButton->Image = nullptr;
			this->metroTextBox2->CustomButton->Location = System::Drawing::Point(99, 1);
			this->metroTextBox2->CustomButton->Name = L"";
			this->metroTextBox2->CustomButton->Size = System::Drawing::Size(21, 21);
			this->metroTextBox2->CustomButton->Style = MetroFramework::MetroColorStyle::Blue;
			this->metroTextBox2->CustomButton->TabIndex = 1;
			this->metroTextBox2->CustomButton->Theme = MetroFramework::MetroThemeStyle::Light;
			this->metroTextBox2->CustomButton->UseSelectable = true;
			this->metroTextBox2->CustomButton->Visible = false;
			this->metroTextBox2->Lines = gcnew cli::array< System::String^  >(1) { L"Выпито в граммах(мл.)" };
			this->metroTextBox2->Location = System::Drawing::Point(196, 178);
			this->metroTextBox2->MaxLength = 32767;
			this->metroTextBox2->Name = L"metroTextBox2";
			this->metroTextBox2->PasswordChar = '\0';
			this->metroTextBox2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->metroTextBox2->SelectedText = L"";
			this->metroTextBox2->SelectionLength = 0;
			this->metroTextBox2->SelectionStart = 0;
			this->metroTextBox2->ShortcutsEnabled = true;
			this->metroTextBox2->Size = System::Drawing::Size(121, 23);
			this->metroTextBox2->TabIndex = 2;
			this->metroTextBox2->Text = L"Выпито в граммах(мл.)";
			this->metroTextBox2->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroTextBox2->UseSelectable = true;
			this->metroTextBox2->WaterMarkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(109)),
				static_cast<System::Int32>(static_cast<System::Byte>(109)), static_cast<System::Int32>(static_cast<System::Byte>(109)));
			this->metroTextBox2->WaterMarkFont = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Pixel));
			// 
			// metroComboBox1
			// 
			this->metroComboBox1->FormattingEnabled = true;
			this->metroComboBox1->ItemHeight = 23;
			this->metroComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Мужчина", L"Женщина" });
			this->metroComboBox1->Location = System::Drawing::Point(196, 94);
			this->metroComboBox1->Name = L"metroComboBox1";
			this->metroComboBox1->Size = System::Drawing::Size(121, 29);
			this->metroComboBox1->TabIndex = 4;
			this->metroComboBox1->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroComboBox1->UseSelectable = true;
			// 
			// metroComboBox2
			// 
			this->metroComboBox2->FormattingEnabled = true;
			this->metroComboBox2->ItemHeight = 23;
			this->metroComboBox2->Location = System::Drawing::Point(196, 217);
			this->metroComboBox2->Name = L"metroComboBox2";
			this->metroComboBox2->Size = System::Drawing::Size(121, 29);
			this->metroComboBox2->TabIndex = 5;
			this->metroComboBox2->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroComboBox2->UseSelectable = true;
			// 
			// metroLabel1
			// 
			this->metroLabel1->AutoSize = true;
			this->metroLabel1->Location = System::Drawing::Point(140, 94);
			this->metroLabel1->Name = L"metroLabel1";
			this->metroLabel1->Size = System::Drawing::Size(36, 19);
			this->metroLabel1->TabIndex = 6;
			this->metroLabel1->Text = L"Пол:";
			this->metroLabel1->Theme = MetroFramework::MetroThemeStyle::Dark;
			// 
			// metroLabel2
			// 
			this->metroLabel2->AutoSize = true;
			this->metroLabel2->Location = System::Drawing::Point(140, 144);
			this->metroLabel2->Name = L"metroLabel2";
			this->metroLabel2->Size = System::Drawing::Size(33, 19);
			this->metroLabel2->TabIndex = 8;
			this->metroLabel2->Text = L"Вес:";
			this->metroLabel2->Theme = MetroFramework::MetroThemeStyle::Dark;
			// 
			// metroLabel3
			// 
			this->metroLabel3->AutoSize = true;
			this->metroLabel3->Location = System::Drawing::Point(56, 178);
			this->metroLabel3->Name = L"metroLabel3";
			this->metroLabel3->Size = System::Drawing::Size(117, 19);
			this->metroLabel3->TabIndex = 9;
			this->metroLabel3->Text = L"Выпито алкоголя:";
			this->metroLabel3->Theme = MetroFramework::MetroThemeStyle::Dark;
			// 
			// metroLabel4
			// 
			this->metroLabel4->AutoSize = true;
			this->metroLabel4->Location = System::Drawing::Point(109, 217);
			this->metroLabel4->Name = L"metroLabel4";
			this->metroLabel4->Size = System::Drawing::Size(64, 19);
			this->metroLabel4->TabIndex = 10;
			this->metroLabel4->Text = L"Напиток:";
			this->metroLabel4->Theme = MetroFramework::MetroThemeStyle::Dark;
			// 
			// metroLabel5
			// 
			this->metroLabel5->AutoSize = true;
			this->metroLabel5->Location = System::Drawing::Point(212, 266);
			this->metroLabel5->Name = L"metroLabel5";
			this->metroLabel5->Size = System::Drawing::Size(0, 0);
			this->metroLabel5->TabIndex = 11;
			this->metroLabel5->Theme = MetroFramework::MetroThemeStyle::Dark;
			// 
			// Operations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(450, 370);
			this->Controls->Add(this->metroLabel5);
			this->Controls->Add(this->metroLabel4);
			this->Controls->Add(this->metroLabel3);
			this->Controls->Add(this->metroLabel2);
			this->Controls->Add(this->metroLabel1);
			this->Controls->Add(this->metroComboBox2);
			this->Controls->Add(this->metroComboBox1);
			this->Controls->Add(this->metroTextBox2);
			this->Controls->Add(this->metroTextBox1);
			this->Controls->Add(this->metrobutton1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MaximumSize = System::Drawing::Size(450, 370);
			this->MinimumSize = System::Drawing::Size(450, 370);
			this->Name = L"Operations";
			this->Padding = System::Windows::Forms::Padding(0, 60, 0, 0);
			this->ShowIcon = false;
			this->Text = L"AlcoDoze | Operations";
			this->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void metrobutton1_Click(System::Object^  sender, System::EventArgs^  e) {
		double  r, c, a, m;
		switch (metroComboBox1->SelectedIndex)
		{
		case 0:
			r = 0.70;
			m = Convert::ToInt32(metroTextBox1->Text);
			a = Convert::ToInt32(metroTextBox2->Text) - 0.20;
			c = a / m * r;
			metroLabel5->Text = Convert::ToString(c);
			break;
		case 1:
			r = 0.60;
			m = Convert::ToInt32(metroTextBox1->Text);
			a = Convert::ToInt32(metroTextBox2->Text) - 0.20;
			c = a / m * r;
			metroLabel5->Text = Convert::ToString(c) ;


			break;
		default:
			break;
		}
	}
};
}
