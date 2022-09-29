//
// Created by luisa on 28/09/2022.
//

#ifndef UNTITLED2_METODOSLISTAS_H
#define UNTITLED2_METODOSLISTAS_H


class MetodosListas {


public:

    struct Node
    {
        int dato;
        Node *next;
    };

    void insertarElementos(Node *&, int);
    void mostrarLista(Node *);
    void buscarElemento(Node *, int);
    void eliminarElemento(Node *, int);
    void sumaPromedioPares(Node *);
    void sumaPromedioImpares(Node *);
    void calcularMenorLista(Node *);
    void calcularMayorLista(Node *);
    void mostrarRepetidos(Node *);
    void eliminarDuplicados(Node *&);
};


#endif //UNTITLED2_METODOSLISTAS_H
