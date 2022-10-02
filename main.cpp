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
        cout<<"-----------------------------------"<<endl;
        cout<<"    ESTE ES SU MENU DE OPCIONES    "<<endl;
        cout<<"-----------------------------------"<<endl;
        cout<<"1. Agregar numero a la lista"<<endl;
        cout<<"2. Imprimir la lista"<<endl;
        cout<<"3. Mostrar el numero mayor de la lista"<<endl;
        cout<<"4. Mostrar el numero menor de la lista"<<endl;
        cout<<"5. Buscar un numero en la lista"<<endl;
        cout<<"6. Encontrar el promedio de los pares"<<endl;
        cout<<"7. Encontrar el promedio de los impares"<<endl;
        cout<<"8. Eliminar un numero de la lista"<<endl;
        cout<<"9. Mirar los numeros repetidos de la lista"<<endl;
        cout<<"10. Eliminar los numeros duplicados"<<endl;
        cout<<"11. Invierte la lista"<<endl;
        cout<<"12. Organiza la lista de forma descendente"<<endl;
        cout<<"-----------------------------------"<<endl;
        cout<<"Ingrese cualquier otro numero para salir del programa"<<endl;
        cout<<"-----------------------------------"<<endl;
        cout<<"ingrese la opcion: "<<endl;
        cin>>opcion;
        cout<<"-----------------------------------"<<endl;
        cout<<"La opcion marcada fue "<<opcion<<endl;
        cout<<"-----------------------------------"<<endl;

        if(opcion==1)
        {
            int input;
            cout<<"Ingrese el numero a insertar: "<<endl;
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
        else if(opcion==6)
        {
            metodos->promedioPares(cabeza);
        }
        else if(opcion==7)
        {
            metodos->promedioImpares(cabeza);
        }
        else if(opcion==8)
        {
            int numero = 0;
            cout << "Ingrese el dato a eliminar " << endl;
            cin>>numero;
            metodos->eliminarElemento(cabeza, numero);
            cout<<"Recuerde mostrar la lista para ver el cambio"<<endl;
        }
        else if(opcion==9)
        {
            cout<<"Estos son los numeros repetidos de la lista..."<<endl;
            metodos->buscarRepetidos(cabeza);
        }
        else if(opcion==10)
        {
            metodos->eliminarDuplicados(cabeza);
            cout<<"Recuerde mostrar la lista para ver el cambio"<<endl;
        }
        else if(opcion==11)
        {
            metodos->invertirLista(&cabeza);
            cout<<"Recuerde mostrar la lista para ver el cambio"<<endl;
        }
        else if(opcion==12)
        {
            metodos->descendente(cabeza);
            cout<<"Recuerde mostrar la lista para ver el cambio"<<endl;
        }
        else
        {
            cout<<"Tenga un lindo dia"<<endl;

            break;
        }

    }

    return 0;
}


