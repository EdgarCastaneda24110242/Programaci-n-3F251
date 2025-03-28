<<<<<<< HEAD
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
            return 'o';
    }
};
=======
#pragma once
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
             return '+';
         else
             return '-';
     }
 };
>>>>>>> b5a57c8 (practica 1)
