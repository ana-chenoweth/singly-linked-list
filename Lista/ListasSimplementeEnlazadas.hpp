#ifndef LISTASSIMPLEMENTEENLAZADAS_HPP_INCLUDED
#define LISTASSIMPLEMENTEENLAZADAS_HPP_INCLUDED

template <typename T>

class ListaSimple
{
public:
    ListaSimple();
    ~ListaSimple();
    ListaSimple(const ListaSimple<T> &l);

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
