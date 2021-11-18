#include "MyForm.h"

using namespace ProjectLR22;

[STAThread]
int main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    ProjectLR22::MyForm form;
    Application::Run(% form);
    return 0;
}

