#include "Hermite.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	InterpolacjaHermitea::Hermite form;
	Application::Run(%form);
}