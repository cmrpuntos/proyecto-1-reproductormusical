/* pila.h
 * TAD Pila implementado sobre Lista Enlazada — elementos enteros.
 * Algoritmos y Estructuras de Datos — Prof. Anthony Barrios
 */

#ifndef PILA_H
#define PILA_H

#include <stdio.h>
#include <stdlib.h>

/* ─── Estructura interna ────────────────────────────────────────────────── */
typedef struct nodo_pila {
    int               value;
    struct nodo_pila *next;
} NodoPila;

typedef struct {
    NodoPila *tope;
} Pila;

/* ─── Operaciones del TAD ───────────────────────────────────────────────── */

/* newStack: crea e inicializa una nueva pila vacía en memoria dinámica.
             Retorna el puntero a la Pila. */
Pila *newStack(void);

/* Vacia: retorna 1 si la pila está vacía, 0 en caso contrario. */
int VaciaP(Pila *p);

/* Push: inserta value en el tope de la pila. */
void Push(Pila *p, int value);

/* Pop: extrae el tope y guarda su valor en *result.
        Retorna 1 si tuvo éxito, 0 si la pila estaba vacía. */
int Pop(Pila *p, int *result);

/* Top: copia el valor del tope en *result sin extraerlo.
        Retorna 1 si tuvo éxito, 0 si la pila estaba vacía. */
int Top(Pila *p, int *result);

#endif /* PILA_H */
