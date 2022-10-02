#include "MetodosListas.h"
using namespace std;
#include <iostream>

void MetodosListas::mostrarLista(Node *lista)
{


    if (lista==NULL)
    {
        cout<<"La lista es vacia"<<endl;
    }

    Node *aux=new Node();
    aux=lista;

    while(aux !=NULL)
    {
        printf("%d ->",aux->dato);
        aux=aux->siguiente;
    }
    printf("NULL\n");
    cout<<endl;


}

void MetodosListas::insertarLista(Node *&lista, int datos)
{
    Node *node= new Node();
    Node *aux;

    node->dato= datos;
    node->siguiente=NULL;

    if(lista==NULL)
    {
        lista=node;
    }
    else
    {
        aux=lista;

        while(aux->siguiente!=NULL)
        {
            aux=aux->siguiente;
        }

        aux->siguiente=node;
    }

}

void MetodosListas::mostrarMayor(Node *lista)
{
    Node *aux= new Node();
    int mayor;
    aux=lista;
    mayor=aux->dato;

    while(aux !=NULL)
    {
        if(aux->dato>mayor)
        {
            mayor=aux->dato;
        }
        aux=aux->siguiente;
    }

    cout<<"El dato mayor es "<<mayor<<endl;
}

void MetodosListas::mostrarMenor(Node *lista)
{
    int menor;
    Node *aux= new Node();
    aux=lista;
    menor=aux->dato;

    while(aux != NULL)
    {
        if(aux->dato < menor)
        {
            menor = aux->dato;
        }

        aux = aux->siguiente;
    }

    cout<<"El dato menor es "<<menor<<endl;
}

void MetodosListas::buscar(Node *lista, int datos)
{
    Node *aux = new Node();
    int contador=0;
    aux = lista;
    int check=0;

    while (aux != NULL)
    {
        contador +=1;
        if(aux->dato == datos)
        {
            cout<<"El numero "<<datos<<" es el elemento numero "<<contador<<" de la lista"<<endl;
            check=1;

        }

        aux= aux->siguiente;
    }
    if (check==0)
    {
        cout<<"El numero no se encuentra en la lista"<<endl;
    }
}

void MetodosListas::promedioPares(Node *lista)
{
    float cant=0;
    float totales=0;
    float div=0;
    Node *aux= new Node();
    aux=lista;

    while (aux != NULL)
    {
        if(aux->dato %2==0)
        {
            totales= totales +aux->dato;
            cant= cant+1;
        }
        aux=aux->siguiente;
    }
    div=totales/cant;

    cout<<"El promedio de los pares de la lista es de "<<div<<endl;

}

void MetodosListas::promedioImpares(Node *lista)
{
    float cant=0;
    float totales=0;
    float div=0;
    Node *aux= new Node();
    aux=lista;

    while (aux != NULL)
    {
        if(aux->dato %2==1)
        {
            totales= totales +aux->dato;
            cant= cant+1;
        }
        aux=aux->siguiente;
    }
    div=totales/cant;

    cout<<"El promedio de los impares de la lista es de "<<div<<endl;

}

void MetodosListas::eliminarElemento(Node *lista, int datos)
{
    Node *aux_borrar;
    Node *anterior = NULL;
    aux_borrar = lista;

    if(datos==lista->dato)
    {
        Node *temporal= new Node();
        temporal=lista;
        aux_borrar=lista->siguiente;
        delete temporal;
        cout<<"El elemento se ha borrado de la lista"<<endl;
    }
    while ((aux_borrar != NULL) && (aux_borrar->dato != datos)) {
        anterior = aux_borrar;
        aux_borrar = aux_borrar->siguiente;
    }
    if (aux_borrar == NULL) {
        cout << "\n El elemento no existe" << endl;
    } else if (anterior == NULL) {
        lista = lista->siguiente;
        delete aux_borrar;
        cout << "\n El elemento se ha eliminado" << endl;
    } else {
        anterior->siguiente = aux_borrar->siguiente;
        delete aux_borrar;
        cout << "\n El elemento se ha eliminado" << endl;
    }
}

void MetodosListas:: buscarRepetidos (Node *lista)
{
    Node *aux= new Node();
    Node *interno= new Node();
    aux= lista;
    int contador=0;
    string total="";

    while(aux != NULL)
    {
        int temporal= aux->dato;
        interno=aux->siguiente;


        while(interno != NULL)
        {

            if(interno->dato== temporal)
            {
                contador=1;
                string temporalt="";
                temporalt.append("El numero ").append(to_string(temporal)).append(" esta repetido");

                if(total.find(temporalt)==-1)
                {
                    total.append("El numero ").append(to_string(temporal)).append(" esta repetido").append("\n");
                }
            }
            interno=interno->siguiente;
        }

        aux=aux->siguiente;
    }
    cout<<total<<endl;
}

void MetodosListas::eliminarDuplicados( Node *lista)
{
    for (Node *nodo = lista; nodo; nodo = nodo->siguiente)
    {
        int dato= nodo->dato;

        for (Node *anterior = nodo, *actual = nodo->siguiente; actual;)
        {
            if (dato==actual->dato)
            {
                anterior->siguiente = actual->siguiente;
                delete actual;
                actual = anterior->siguiente;
            }
            else
            {
                anterior = actual;
                actual = actual->siguiente;
            }
        }
    }
}

void MetodosListas::ordenarDecreciente(Node *lista)
{
    Node *aux= new Node();
    aux=lista;

    while(aux != NULL)
    {

        aux=aux->siguiente;
    }
}

void MetodosListas::invertirLista(Node **lista)
{
    Node* previo= NULL;
    Node* actual= *lista;

    while(actual != NULL)
    {
        Node* siguientes= actual->siguiente;
        actual->siguiente=previo;
        previo=actual;
        actual=siguientes;
    }
    *lista=previo;
}

void MetodosListas::descendente(Node *lista)
{
    Node *aux= new Node();
    Node *siguientes= new Node();
    int datos=0;
    aux=lista;

    while(aux != NULL)
    {
        siguientes= aux->siguiente;
        while(siguientes !=NULL)
        {
            if (siguientes->dato > aux->dato)
            {
                datos = siguientes->dato;
                siguientes->dato = aux->dato;
                aux->dato = datos;
            }
            siguientes = siguientes->siguiente;
        }
        aux=aux->siguiente;
    }
}