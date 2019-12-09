#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AlcoDoze::MyForm form; //WinFormsTest - имя вашего проекта
	Application::Run(%form);
	
}



