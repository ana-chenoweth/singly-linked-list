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
//*********************************************************************************************
template <typename T>
void ListaSimple<T>::Vaciar()
{
    while(!EstaVacia()){
        EliminarFinal();
    }
}