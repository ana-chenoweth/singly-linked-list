//****************************************************************************************
template <typename T>
ListaSimple<T>::ListaSimple(): tam(0), primero(nullptr), ultimo(nullptr)
{

}
//****************************************************************************************
template <typename T>
ListaSimple<T>::ListaSimple(const ListaSimple<T> &l): tam(0), primero(nullptr), ultimo(nullptr)
{
    *this = l;
}
//****************************************************************************************
template <typename T>
ListaSimple<T>::~ListaSimple()
{
    Vaciar();
}
//****************************************************************************************
template <typename T>
void ListaSimple<T>::AgregarInicio(T valor)
{
        Elemento *nuevo = new Elemento(valor, EstaVacia() ? nullptr : primero);
        primero = nuevo;
        if(EstaVacia()) ultimo = nuevo;
        ++tam;
}
//****************************************************************************************
template <typename T>
void ListaSimple<T>::AgregarFinal(T valor)
{
        Elemento *nuevo = new Elemento(valor, nullptr);
        ultimo->siguiente = nuevo;
        ultimo = nuevo;
        if(EstaVacia()) primero = nuevo;
        ++tam;
}
//*********************************************************************************************
template <typename T>
void ListaSimple<T>::Vaciar()
{
    while(!EstaVacia()){
        EliminarFinal();
    }
}