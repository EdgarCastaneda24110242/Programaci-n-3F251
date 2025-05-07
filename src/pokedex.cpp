#include <list>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <map>

using namespace std;
// Definicion de la clase Pokemon
void demo();

enum TipoPokemon
{
    AGUA,
    FUEGO,
    PLANTA,
    VOLADOR,
    TIERRA,
    ELECTRICO,
    HIELO,
    PSICICO,
    ROCA,
    BICHO,
    DRAGON
};
class Pokemon
{
private:
    string nombre;
    list<TipoPokemon> tipos;

};

void demo();
{
    cout <<"--------------------------" << endl;
    cout << "1. Arreglos" << endl;
    // artreglos clasicos
    int edades[10];
    edades[0] = 1;
    edades[1] = 10;
    edades[2] = 20;
    edades[3] = 30;
    edades[4] = 40;
    cout << "Edad numero 1: " << edades[0] << endl; // acceder a un valor unico

    // contenedores de la libreria estandar c++
    cout << "--------------------------" << endl;
    cout << "2. Listas" << endl;

    list<int> listaEdades;
    listaEdades.push_back(1);
    listaEdades.push_back(10);
    listaEdades.push_back(20);
    listaEdades.push_back(30);
    listaEdades.push_back(40);
    // no se puede acceder a n valor unico
    int indice = 0;
    for (auto &&edad : listaEdades)
    {
        cout << "Edad numero: " << indice << " " << edades[indice] << endl;
        indice++;
    }
    cout << "--------------------------" << endl;
    cout << "3. Vectores" << endl;

    vector<int> vectorEntero;
    vectorEntero.push_back(1);
    vectorEntero.push_back(2);
    vectorEntero.push_back(3);
    vectorEntero.push_back(4);
    vectorEntero[4] = 100; // operador []

    for (int i = 0; i < 5; i++)
    {
        cout << "Edad numero: " << i << " " << vectorEntero[i] << endl;
    }

    cout << "--------------------------" << endl;
    cout << "4. Mapas" << endl;
    map<string, Pokemon> pokedex;
}
int main (int argc, char const *argv[])
{
    cout << "Hola mundo" << endl;
    cout << "--------------------------" << endl;
    cout << "Ejemplo de Pokedex" << endl;
    demo();
    return 0;
}