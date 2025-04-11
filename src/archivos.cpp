#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream archivoSalida("archivo.txt");
    if (!archivoSalida)
    {
        cerr << "Error al leer el archivo" << endl;
        return 1;
    }
    cout << "Escribiendo en el archivo" << endl;
    archivoSalida << "12 + 1" << endl;

    archivoSalida.close();
    cout << "Archivo cerrado" << endl;

    // Lectura de un archivo
    ifstream archivoEntrada("archivo.txt");
    if (!archivoEntrada)
    {
        cerr << "Error al abrir el archivo" << endl;
        return 1;
    }
    cout << "Leyendo el archivo" << endl;
    string linea;
    while (getline(archivoEntrada, linea))
    {
        cout << linea << endl;
    }
    archivoEntrada.close();
    cout << "Archivo cerrado" << endl;
    return 0;
}