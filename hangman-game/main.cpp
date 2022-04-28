#include "Form1.h";
#include <time.h>
#include <locale>

using namespace hangman_game;

[STAThread]
int main(array<System::String^>^ args)
{
    srand(time(0));
    setlocale(LC_ALL, "en_US.utf8");
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Form1());
    return 0;
}
