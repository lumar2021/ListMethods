//
// Created by luisa on 28/09/2022.
//

#include "MetodosListas.h"


void MetodosListas::insertarElementos(Node *&list, int info)
{
    Node node= new Node();
    Node *auxiliar;

    node->dato=info;
    node->next=NULL;

    if(list==NULL)
    {
        list=node;
    }
    else
    {
        auxiliar=list;

        while(auxiliar->next != NULL)
        {
            auxiliar=auxiliar->next;
        }
        auxiliar->next=node;
    }
    cout<<"Insertado"<<endl;
}

void MetodosListas::mostrarLista(Node *&list)
{
    Node *position= new Node();

    position=list;

    while (position != NULL)
    {
        cout<<position->dato<<" , "<<endl;
        position=position->next;
    }
}

void MetodosListas::buscarElemento(Node *&, int)
{

}

void MetodosListas::sumaPromedioPares(Node *list)
{
    Node *node= new Node();
    int sumaDatos=0;
    int totalDatos=0;

    node=list;

    while(node!= NULL)
    {
        if(node->dato%2==0)
        {
           sumaDatos+=node->dato;
           totalDatos+=1;
        }
        node=node->next;
    }

    cout<<"El promedio de los pares es de "<<sumaDatos/totalDatos<<endl;
}

void MetodosListas::sumaPromedioImpares(Node *  list)
{
    Node *node= new Node();
    node=list;
    int sumaDatos=0;
    int totalDatos=0;

    while(node != NULL)
    {
        if(node->dato%2==1)
        {
           sumaDatos+=node->dato;
           totalDatos+=1;
        }

        node=node->siguiente;
    }

    cout<<"El promedio de los datos impares es de "<< sumaDatos/totalDatos << endl;
}