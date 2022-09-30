#include <iostream>
#include<stdlib.h>
#include "MetodosListas.h"
using namespace std;

int main() {
    int opcion=0;
    Node *cabeza=NULL;
    MetodosListas *metodos= new MetodosListas();
    while (true)
    {
        cout<<"ingrese la opcion: "<<endl;
        cin>>opcion;

        if(opcion==1)
        {
            int input;
            cout<<"Ingrese el numero a ingresar: "<<endl;
            cin>>input;
            metodos->insertarLista(cabeza, input);
        }
        else if(opcion==2)
        {
            metodos->mostrarLista(cabeza);
        }
        else if(opcion==3)
        {
            metodos->mostrarMayor(cabeza);
        }
        else if(opcion == 4)
        {
            metodos->mostrarMenor(cabeza);
        }
        else if(opcion==5)
        {
            int number;
            cout<<"Ingrese el numero que quiere buscar: "<<endl;
            cin>>number;
            metodos->buscar(cabeza, number);
        }
        else
        {
            break;
        }

    }

    return 0;
}
