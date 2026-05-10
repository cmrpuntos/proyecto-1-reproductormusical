#include <stdio.h>
#include <stdlib.h>
#include "cola.h"

/* ─────────────────────────────────────────────────────────────────────────────
   TAD Cola — Implementación
   ───────────────────────────────────────────────────────────────────────────── */

Cola * newCola() {
    Cola *c = (Cola *)malloc(sizeof(Cola));
    if (c == NULL) {
        fprintf(stderr, "Error: memoria insuficiente en newCola.\n");
        exit(EXIT_FAILURE);
    }
    c->frente = NULL;
    c->final  = NULL;
    return c;
}

void AnulaC(Cola *c) {
    c->frente = NULL;
    c->final  = NULL;
}

int VaciaC(Cola *c) {
    return c->frente == NULL;
}

void Encolar(Cola *c, int x) {
    Nodo *nuevo = (Nodo *)malloc(sizeof(Nodo));
    if (nuevo == NULL) {
        fprintf(stderr, "Error: memoria insuficiente en Encolar.\n");
        exit(EXIT_FAILURE);
    }
    nuevo->dato = x;
    nuevo->sig  = NULL;

    if (Vacia(c)) {
        c->frente = nuevo;
        c->final  = nuevo;
    } else {
        c->final->sig = nuevo;
        c->final      = nuevo;
    }
}

void Desencolar(Cola *c, int *x) {
    Nodo *aux = c->frente;
    *x = aux->dato;
    c->frente = aux->sig;
    if (c->frente == NULL)
        c->final = NULL;
    free(aux);
}

void Frente(Cola *c, int *x) {
    *x = c->frente->dato;
}
