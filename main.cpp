#include <iostream>
#include "Lista/ListasSimplementeEnlazadas.hpp"
using namespace std;

int main()
{
    ListaSimple<int> lista;

    // Agregar elementos
    lista.AgregarInicio(1);
    lista.AgregarInicio(2);
    lista.AgregarFinal(3);
    lista.AgregarPos(4, 1); // Agregar en la posicion 1

    // Imprimir la lista
    cout << "Lista despues de agregar elementos: ";
    lista.Imprimir();
    cout << endl;

    // Modificar elemento en la posicion 2
    cout << "\nModificacion del elemento en la posicion 2:" << endl;
    cout << "Elemento en la posicion 2 antes de modificar: " << lista.ObtenerPorPos(1) << endl;
    cout << "Nuevo valor para el elemento en la posicion 2: ";
    int nuevo_valor;
    cin >> nuevo_valor;
    lista.ModificarPos(nuevo_valor, 1); // Utilizamos ModificarPos en lugar de ModificarPorPos
    cout << "Lista despues de modificar el elemento en la posicion 2: ";
    lista.Imprimir();
    cout << endl;
    return 0;
}
