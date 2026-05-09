#include <stdio.h>
#include <stdlib.h>
#include <TADs.h>
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
    ////Crear estructuras que se usaran luego
    //Lista DE: Reproducciones
    //Pila: Historial
    //Cola: Canciones en cola
    int opcion;
    //MENU
    do{
        printf();
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
    
        default:
            break;
        }
    } while (opcion!=9);

    //Liberar toda la memoria antes de cerrar
    printf("Adiós.");
    return 0;
}