#include "ArraySortingForm.h"

using namespace System;
using namespace System::Windows::Forms;
 [STAThreadAttribute]

 void main(array<String^>^ args) {
	 Application::SetCompatibleTextRenderingDefault(false);
	 Application::EnableVisualStyles();
	 FirstControlWork2::ArraySortingForm form;
	 Application::Run(% form);
}