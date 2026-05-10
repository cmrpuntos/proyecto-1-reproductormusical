/* pila.c
 * Implementación del TAD Pila sobre Lista Enlazada.
 * Algoritmos y Estructuras de Datos — Prof. Anthony Barrios
 */

#include "pila.h"

/* newStack: reserva memoria para la Pila, inicializa tope en NULL
             y la retorna lista para usar. */
Pila *newStack(void)
{
    Pila *p = malloc(sizeof(Pila));
    if (p == NULL) return NULL;
    p->tope = NULL;
    return p;
}

/* Vacia: retorna 1 si la pila no tiene elementos, 0 en caso contrario. */
int VaciaP(Pila *p)
{
    return (p->tope == NULL) ? 1 : 0;
}

/* Push: crea un nuevo nodo con value y lo enlaza al tope de la pila. */
void Push(Pila *p, int value)
{
    NodoPila *nodo = malloc(sizeof(NodoPila));
    if (nodo == NULL) return;
    nodo->value = value;
    nodo->next  = p->tope;
    p->tope     = nodo;
}

/* Pop: extrae el nodo del tope, guarda su valor en *result y libera
        la memoria. Retorna 1 si tuvo éxito, 0 si la pila estaba vacía. */
int Pop(Pila *p, int *result)
{
    if (VaciaP(p)) return 0;

    NodoPila *tope = p->tope;
    *result  = tope->value;
    p->tope  = tope->next;
    free(tope);
    return 1;
}

/* Top: copia el valor del tope en *result sin extraerlo.
        Retorna 1 si tuvo éxito, 0 si la pila estaba vacía. */
int Top(Pila *p, int *result)
{
    if (VaciaP(p)) return 0;

    *result = p->tope->value;
    return 1;
}
