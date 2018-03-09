#include "MyPlayer.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	//Application::EnableVisualStyles();
	//Application::SetCompatibleTextRenderingDefault(false);
	wmpEx::MyPlayer form;
	Application::Run(%form);
}