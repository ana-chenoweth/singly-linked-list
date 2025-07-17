#ifndef LISTASSIMPLEMENTEENLAZADAS_HPP_INCLUDED
#define LISTASSIMPLEMENTEENLAZADAS_HPP_INCLUDED

template <typename T>

class ListaSimple
{
public:
    ListaSimple();
    ~ListaSimple();
    ListaSimple(const ListaSimple<T> &l);
    void AgregarInicio(T valor);
    void AgregarFinal(T valor);
    void AgregarPos(T valor, int pos);
    void EliminarInicio();
    void EliminarFinal();
    void EliminarPos(int pos);
    bool BuscarValor(T valor) const;
    int BuscarPos(T valor) const;
    void Vaciar();

private:
    int tam, pos;
    struct Elemento
    {
        T valor;
        Elemento *siguiente;
        Elemento(T val, Elemento *sig) : valor(val), siguiente(sig) {}
    };
    Elemento *primero, *ultimo;
};

#include "ListasSimplementeEnlazadas.tpp"

#endif // LISTASSIMPLEMENTEENLAZADAS_HPP_INCLUDED
