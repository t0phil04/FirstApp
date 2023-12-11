#include "MainForm.h"



using namespace System;
using namespace System::Windows::Forms;

// Entry point of the application
void main() {
	


	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FirstApp::MainForm form;
	Application::Run(% form);

}

