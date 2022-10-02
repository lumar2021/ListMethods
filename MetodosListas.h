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
    void promedioPares(Node *);
    void promedioImpares(Node *);
    void eliminarElemento(Node *, int);
    void buscarRepetidos(Node *);
    void eliminarDuplicados(Node *);
    void ordenarDecreciente(Node *);
    void invertirLista(Node **);
    void descendente(Node *);

};

#endif