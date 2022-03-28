#include"MyForm"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array<String^>^args)
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);

	Project::MyForm form;
	Application::Run(% form);
}
