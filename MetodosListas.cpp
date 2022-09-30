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
        cout<<aux->dato<<" ... ";
        aux=aux->siguiente;
    }
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

    while (aux != NULL)
    {
        contador +=1;
        if(aux->dato == datos)
        {
            cout<<"El numero "<<datos<<" es el elemento numero "<<contador<<" de la lista"<<endl;

        }

        aux= aux->siguiente;
    }
}