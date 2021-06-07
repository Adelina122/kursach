#include "FlowerShop.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace kursach;

[STAThreadAttribute]
void main(cli::array<String^>^ args)
{
		setlocale(0, "rus");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	kursach::FlowerShop form;
	Application::Run(% form);
}
