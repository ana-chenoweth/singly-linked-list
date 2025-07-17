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
//****************************************************************************************
template <typename T>
void ListaSimple<T>::AgregarPos(T valor, int pos)
{
    if(pos<0 || pos > tam) FueraDeRango();
    if(pos==0) AgregarInicio(valor);
    else if(pos==tam) AgregarFinal(valor);
    else{
        Elemento *ant = primero;
        for(int i = 1; i<pos; ++i) ant = ant->siguiente;
        Elemento *nuevo = new Elemento(valor, ant->siguiente);
        ant->siguiente = nuevo;
        ++tam;
    }
}
//*********************************************************************************************
template <typename T>
void ListaSimple<T>::Vaciar()
{
    while(!EstaVacia()){
        EliminarFinal();
    }
}