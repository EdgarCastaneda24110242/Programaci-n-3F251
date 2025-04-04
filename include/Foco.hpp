#pragma once
#include <iostream>
class Foco
{
private:
    bool encendido;

public:
    Foco()
    {
        encendido = false;
    }
    ~Foco() {}
    void Encender()
    {
        encendido = true;
    }
    void Apagar()
    {
        encendido = false;
    }
    char LeerEstado()
    {
        if (encendido)
            return '*';
        else
            return '-';
    }
};
