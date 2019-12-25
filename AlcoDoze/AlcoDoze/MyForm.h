#pragma once
#include "Operations.h";

namespace AlcoDoze {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MetroFramework::Forms;
	using namespace System::IO;
	using namespace System::Diagnostics;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public MetroForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: MetroFramework::Controls::MetroButton^  metroButton1;
	private: MetroFramework::Controls::MetroButton^  metroButton2;
	private: MetroFramework::Controls::MetroButton^  metroButton3;
	private: MetroFramework::Controls::MetroButton^  metroButton4;
	private: MetroFramework::Controls::MetroButton^ metroButton5;
	private: MetroFramework::Controls::MetroButton^ metroButton6;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->metroButton1 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton2 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton3 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton4 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton5 = (gcnew MetroFramework::Controls::MetroButton());
			this->metroButton6 = (gcnew MetroFramework::Controls::MetroButton());
			this->SuspendLayout();
			// 
			// metroButton1
			// 
			this->metroButton1->AutoSize = true;
			this->metroButton1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->metroButton1->Highlight = true;
			this->metroButton1->Location = System::Drawing::Point(166, 92);
			this->metroButton1->Name = L"metroButton1";
			this->metroButton1->Size = System::Drawing::Size(118, 32);
			this->metroButton1->TabIndex = 0;
			this->metroButton1->Text = L"Начать тест";
			this->metroButton1->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroButton1->UseSelectable = true;
			this->metroButton1->Click += gcnew System::EventHandler(this, &MyForm::metroButton1_Click);
			// 
			// metroButton2
			// 
			this->metroButton2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->metroButton2->Highlight = true;
			this->metroButton2->Location = System::Drawing::Point(166, 142);
			this->metroButton2->Name = L"metroButton2";
			this->metroButton2->Size = System::Drawing::Size(118, 32);
			this->metroButton2->TabIndex = 1;
			this->metroButton2->Text = L"Информация";
			this->metroButton2->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroButton2->UseSelectable = true;
			this->metroButton2->Click += gcnew System::EventHandler(this, &MyForm::metroButton2_Click);
			// 
			// metroButton3
			// 
			this->metroButton3->Highlight = true;
			this->metroButton3->Location = System::Drawing::Point(166, 195);
			this->metroButton3->Name = L"metroButton3";
			this->metroButton3->Size = System::Drawing::Size(118, 32);
			this->metroButton3->TabIndex = 2;
			this->metroButton3->Text = L"Справка";
			this->metroButton3->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroButton3->UseSelectable = true;
			this->metroButton3->Click += gcnew System::EventHandler(this, &MyForm::metroButton3_Click);
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
			this->metroButton4->TabIndex = 3;
			this->metroButton4->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroButton4->UseSelectable = true;
			this->metroButton4->UseStyleColors = true;
			this->metroButton4->Click += gcnew System::EventHandler(this, &MyForm::metroButton4_Click);
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
			this->metroButton5->TabIndex = 4;
			this->metroButton5->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroButton5->UseSelectable = true;
			this->metroButton5->UseStyleColors = true;
			this->metroButton5->Click += gcnew System::EventHandler(this, &MyForm::metroButton5_Click);
			// 
			// metroButton6
			// 
			this->metroButton6->Highlight = true;
			this->metroButton6->Location = System::Drawing::Point(166, 247);
			this->metroButton6->Name = L"metroButton6";
			this->metroButton6->Size = System::Drawing::Size(118, 32);
			this->metroButton6->TabIndex = 5;
			this->metroButton6->Text = L"Выход";
			this->metroButton6->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->metroButton6->UseSelectable = true;
			this->metroButton6->Click += gcnew System::EventHandler(this, &MyForm::metroButton6_Click);
			// 
			// MyForm
			// 
			this->ApplyImageInvert = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->BorderStyle = MetroFramework::Forms::MetroFormBorderStyle::FixedSingle;
			this->ClientSize = System::Drawing::Size(450, 370);
			this->Controls->Add(this->metroButton6);
			this->Controls->Add(this->metroButton5);
			this->Controls->Add(this->metroButton4);
			this->Controls->Add(this->metroButton3);
			this->Controls->Add(this->metroButton2);
			this->Controls->Add(this->metroButton1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(450, 370);
			this->MinimumSize = System::Drawing::Size(450, 370);
			this->Name = L"MyForm";
			this->Text = L"AlcoDoze | Menu";
			this->Theme = MetroFramework::MetroThemeStyle::Dark;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void metroButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		Form^ f1 = gcnew Operations;
		f1->Show();
	}
	private: System::Void metroButton6_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void metroButton3_Click(System::Object^ sender, System::EventArgs^ e) {

	Process::Start("Help.Html");
}
private: System::Void metroButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("Help.Html");
}
private: System::Void metroButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("Info.Html");
}
private: System::Void metroButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("Info.Html");
}
};

}
