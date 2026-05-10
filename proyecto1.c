#include <stdio.h>
#include <stdlib.h>
#include <cola.h>
#include <listas.h>
#include <pila.h>
//Lectura de txt

//PLAY
//Se recibe el nombre de una canción o lista
////Eliminación de la reproducción actual
////Creación de lista SE en el caso de una lista de reproducción
////Se crea también

//QUEUE
//Se agrega a una cola el elemento

//NEXT

//BACK

//SHUFFLE

//LOOP
////Activar:Enlazar ultimo elemento al primero
////Desactivar:Desenlazar

//CLEAR QUEUE
////Free todo en la cola

//CLEAR HISTORY
////Free todo el historial

//MAIN
int main(){
    printf("BIENVENIDO AL REPRODUCTOR DE MÚSICA REAL NO FAKE");
    
    //Apertura del archivo con las canciones
    char *archivo;
    FILE *catalogo;
    printf("Ingrese el nombre del archivo con extensión.");
    scanf("%s",archivo);
    FILE* catalogo = (archivo,"r");
    while (catalogo==NULL){
        printf("No se encontró el archivo. Intente nuevamente.");
        scanf("%s",archivo);
        FILE* catalogo = (archivo,"r");
    }

    
    ////Crear estructuras que se usaran luego
    //Lista DE: Reproducciones (hay que editar el struct de nodo para crear el nodo
    //doblemente enlazado)

    //Pila: Historial
    Pila *historial = newStack();

    //Cola: Canciones en cola
    Cola *queue = newCola();

    int opcion;
    //MENU
    do{
        printf("Ingrese el número correspondiente a la acción deseada.");
        scanf("%i",&opcion);
        switch (opcion)
        {
        case 1: //PLAY
            /* code */
            break;

        case 2: //QUEUE
            /* code */
            break;

        case 3: //NEXT
            /* code */
            break;

        case 4: //BACK
            /* code */
            break;

        case 5: //SHUFFLE
            /* code */
            break;

        case 6: //LOOP
            /* code */
            break;

        case 7: //CLEAR QUEUE
            /* code */
            break;

        case 8: //CLEAR HISTORY
            /* code */
            break;
    
        default: //Entrada invalida
            printf("Opción fuera de rango. Intente nuevamente.");
            break;
        }
    } while (opcion!=9);//SALIR
    //Liberar toda la memoria antes de cerrar
    printf("Adiós.");
    return 0;
}