#ifndef UNTITLED2_METODOSLISTAS_H
#define UNTITLED2_METODOSLISTAS_H
#include "Node.h"

class MetodosListas
{
public:
    void mostrarLista(Node *);
    void insertarLista(Node *&, int);
    void mostrarMenor(Node *);
    void mostrarMayor(Node *);
    void buscar(Node *, int);
    void promedioPares(Node *, int);
};

#endif