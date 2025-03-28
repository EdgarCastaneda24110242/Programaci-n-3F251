#include <iostream>
<<<<<<< HEAD
#include "Foco.hpp"
int main(int argc, char const *argv[])
{
    Foco focos[10];
    for (size_t i = 0; i < 10; i++)
    {
        focos[1].Encender();
    }

    foco1.Encender();

    std::cout
        << "Foco 1:"
        << foco1.LeerEstado()
        << std::endl;

=======
#include "Serie.hpp"
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>

using namespace ftxui;
int main(int argc, char const *argv[])
{
    ftxui::Screen pantalla= Screen::Create(
        Dimension::Full(), 
        Dimension::Full());

    auto document = hbox({vbox(spinner(1,1))});

    
>>>>>>> b5a57c8 (practica 1)
    return 0;
}