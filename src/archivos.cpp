#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct persona
{
    char nombre[12];
    int edad;
};
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

    //escritura de archivos binarios
    ofstream archivoSalidaBinario("archivo.bin", ios::binary);
    if (!archivoSalidaBinario)
    {
        cerr << "Error al abrir el archivo binario" << endl;
        return 1;
    }
    persona p1 = {"Juan", 20};
    persona p2 = {"Maria", 30};
    persona p3 = {"Pedro", 40};

    archivoSalidaBinario.write((char*)(&p1), sizeof(persona));
    archivoSalidaBinario.write((char*)(&p2), sizeof(persona));  
    archivoSalidaBinario.write((char*)(&p3), sizeof(persona));
    archivoSalidaBinario.close();
    cout << "Archivo binario cerrado" << endl;
    // Lectura de archivos binarios






    return 0;
}