#include "MyForm.h"
#include "Login.h"
#include "Register.h" 
#include "AdminProfile.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
using namespace System ; 
using namespace System::Windows::Forms;
[STAThread]
void main (array<String^>^args)
{

	Application::EnableVisualStyles(); 
	Application::SetCompatibleTextRenderingDefault(false); 
	Project3::MyForm form; 
	Application::Run(%form); 
}
