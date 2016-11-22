#include "colours.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "colours.h"



main()
{
 // Declare aqui las variables necesarias
 int posiciongato, posicionraton, turnoraton, turnogato, dadoraton, dadogato, contador=0;


  srand(time(NULL));		// Inicializa semilla del generador de numeros aleatorio de rand

 // Escriba a partir de aqui el codigo del programa


posiciongato=0;
posicionraton=29;



    while (posiciongato!=posicionraton)
    {

    scanf("%*c");

    cambiar_color(GREEN);
    turnoraton=(rand()%6+1);
    dadoraton=turnoraton;
    posicionraton=(posicionraton+dadoraton)%60;
    printf("Raton: He sacado un %d. Voy a la casilla %d \n", dadoraton, posicionraton);
    cambiar_color(DEFAULT);
    contador=contador+1;


        if (posiciongato!=posicionraton)
        {

        scanf("%*c");
        cambiar_color(RED);
        turnogato=(rand()%6+1);
        dadogato=turnogato;
        posiciongato=(posiciongato+2*dadogato)%60;
        printf("Gato: He sacado un %d. Voy a la casilla %d \n", dadogato, posiciongato);
        cambiar_color(DEFAULT);
        contador=contador+1;
        }
    }

    if (contador%2)
    {
    cambiar_color(GREEN);
    printf("Ratón: He ganado \n");
    cambiar_color(DEFAULT);
    }


    else
    {
    cambiar_color(RED);
    printf("Gato: He ganado \n");
    cambiar_color(DEFAULT);
    }

}
