#pragma once
#include <iostream>
#include "Foco.hpp"
class Serie
{
private:
    Foco focos[10];

public:
    void EncenderTodo()
    {
        this->EncenderCantidad(10);
    }
    void EncenderCantidad(size_t cantidad)
    {
        for (size_t i = 0; i < cantidad; i++)
        {
            focos[i].Encender();
        }
    }
    void RecorrerDerecha()
    {
    }
    void ApagarTodo()
    {
        for (size_t i = 0; i < 10; i++)
        {
            focos[i].Apagar();
        }
    }
    void Imprimir()
    {
        for (size_t i = 0; i < 10; i++)
        {
            
            std::cout << focos[1].LeerEstado();
        }
        std::cout << std::endl;
    }
};