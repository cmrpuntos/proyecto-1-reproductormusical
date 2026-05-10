#ifndef COLA_H
#define COLA_H

/* ─────────────────────────────────────────────────────────────────────────────
   TAD Cola — Declaraciones
   Implementación con lista enlazada simple.
   ───────────────────────────────────────────────────────────────────────────── */

typedef struct Nodo {
    int dato;
    struct Nodo *sig;
} Nodo;

typedef struct {
    Nodo *frente;
    Nodo *final;
} Cola;

/* Crea y retorna una cola vacía (frente y final en NULL). */
Cola * newCola();

/* Inicializa la cola *c a estado vacío. No libera memoria. */
void AnulaC(Cola *c);

/* Retorna 1 si la cola está vacía, 0 en caso contrario. */
int VaciaC(Cola *c);

/* Inserta el valor x al final de la cola *c. */
void Encolar(Cola *c, int x);

/* Extrae el elemento del frente de *c y lo almacena en *x.
   Precondición: la cola no debe estar vacía. */
void Desencolar(Cola *c, int *x);

/* Consulta el elemento del frente de c y lo almacena en *x, sin extraerlo.
   Precondición: la cola no debe estar vacía. */
void Frente(Cola *c, int *x);

#endif /* COLA_H */
