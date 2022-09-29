#include <iostream>
#include "MetodosListas.h"
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct Node
{
    int dato;
    Node *next;
};


int main() {

    MetodosListas m;

    Node *lista= NULL;
    int dato;
    char opcion;

    m.sumaPromedioImpares(lista);



    std::cout << "Hello, World!" << std::endl;
    return 0;
}
