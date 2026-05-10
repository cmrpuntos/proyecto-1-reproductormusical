/* listas.h
 * TAD Lista Simplemente Enlazada — campos: value (int) y puntero next.
 * Algoritmos y Estructuras de Datos — Prof. Anthony Barrios
 */

#ifndef LISTAS_H
#define LISTAS_H

#include <stdio.h>
#include <stdlib.h>

/* ─── Definición del nodo ───────────────────────────────────────────────── */
typedef struct node {
    int          value;
    struct node *next;
} Node;

/* ─── Operaciones del TAD ───────────────────────────────────────────────── */

/* new_item: crea un nuevo nodo con el valor dado y next = NULL.
             Retorna el puntero al nodo o NULL si falla malloc. */
Node *new_item(int value);

/* add_front: añade newp al frente de listp y retorna la nueva lista. */
Node *add_front(Node *listp, Node *newp);

/* add_end: añade newp al final de listp y retorna la nueva lista. */
Node *add_end(Node *listp, Node *newp);

/* insert: inserta newp de forma ordenada (ascendente por value)
           y retorna la nueva lista. */
Node *insert(Node *listp, Node *newp);

/* lookup: busca el primer nodo cuyo value coincide con value.
           Retorna el puntero al nodo, o NULL si no lo encuentra. */
Node *lookup(Node *listp, int value);

/* in_counter: retorna la cantidad de elementos en listp. */
int in_counter(Node *listp);

/* print: imprime los valores de listp en formato: v1 -> v2 -> ... -> NULL */
void print(Node *listp);

/* free_all: libera todos los nodos de listp. */
void free_all(Node *listp);

/* del_item: elimina la primera ocurrencia del nodo con value dado.
             Retorna la nueva lista. */
Node *del_item(Node *listp, int value);

/* is_empty: retorna 1 si la lista está vacía (listp == NULL), 0 si no. */
int is_empty(Node *listp);

#endif /* LISTAS_H */
