/* listas.c
 * Implementación del TAD Lista Simplemente Enlazada.
 * Algoritmos y Estructuras de Datos — Prof. Anthony Barrios
 */

#include "listas.h"

/* new_item: reserva memoria para un nuevo nodo, le asigna value y
             deja next en NULL. Retorna el puntero al nodo o NULL si
             malloc falla. */
Node *new_item(int value)
{
    Node *p = malloc(sizeof(Node));
    if (p == NULL) return NULL;
    p->value = value;
    p->next  = NULL;
    return p;
}

/* add_front: enlaza newp al frente de listp y retorna el nuevo cabezal. */
Node *add_front(Node *listp, Node *newp)
{
    newp->next = listp;
    return newp;
}

/* add_end: recorre la lista hasta el último nodo y enlaza newp al final.
            Si la lista está vacía, newp pasa a ser el cabezal. */
Node *add_end(Node *listp, Node *newp)
{
    if (listp == NULL) return newp;

    Node *p = listp;
    while (p->next != NULL)
        p = p->next;

    p->next = newp;
    return listp;
}

/* insert: inserta newp en orden ascendente por value. */
Node *insert(Node *listp, Node *newp)
{
    if (listp == NULL || newp->value <= listp->value) {
        newp->next = listp;
        return newp;
    }

    Node *p = listp;
    while (p->next != NULL && p->next->value < newp->value)
        p = p->next;

    newp->next = p->next;
    p->next    = newp;
    return listp;
}

/* lookup: retorna el primer nodo cuyo value coincide, o NULL si no existe. */
Node *lookup(Node *listp, int value)
{
    for (Node *p = listp; p != NULL; p = p->next)
        if (p->value == value)
            return p;
    return NULL;
}

/* in_counter: retorna la cantidad de nodos en la lista. */
int in_counter(Node *listp)
{
    int count = 0;
    for (Node *p = listp; p != NULL; p = p->next)
        count++;
    return count;
}

/* print: imprime la lista en formato: v1 -> v2 -> ... -> NULL */
void print(Node *listp)
{
    for (Node *p = listp; p != NULL; p = p->next)
        printf("%d -> ", p->value);
    printf("NULL\n");
}

/* free_all: libera todos los nodos de la lista. */
void free_all(Node *listp)
{
    Node *next;
    while (listp != NULL) {
        next   = listp->next;
        free(listp);
        listp  = next;
    }
}

/* del_item: elimina la primera ocurrencia del nodo con value dado y
             retorna la nueva lista. */
Node *del_item(Node *listp, int value)
{
    if (listp == NULL) return NULL;

    if (listp->value == value) {
        Node *next = listp->next;
        free(listp);
        return next;
    }

    Node *p = listp;
    while (p->next != NULL && p->next->value != value)
        p = p->next;

    if (p->next != NULL) {
        Node *to_del = p->next;
        p->next      = to_del->next;
        free(to_del);
    }

    return listp;
}

/* is_empty: retorna 1 si la lista está vacía, 0 en caso contrario. */
int is_empty(Node *listp)
{
    return (listp == NULL) ? 1 : 0;
}
