#include "MIFormulario.h"
using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MiPrimerJuego::MIFormulario()); //Project 1 es el nombre del proyecto
}

