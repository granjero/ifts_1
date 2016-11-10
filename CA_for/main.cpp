/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 14 de abril de 2016, 19:35
 */

#include <cstdlib>
#include <stdio.h>

/*
 * EJEMPLO DE LA FUNCION FOR
 * 
 * for(i=0; i<3; i++)
 * i=0 punto de partida
 * i<3 condcion
 * i++ incrementa la variable i
 * 
 */

main()
{
    //declaracion de variables
    int contador; //variable contador que es la que va a ser incrementada dentro del for
    
    for(contador = 0; contador < 100; contador++)
    {
        //imprime el valor de contador en cada iteracion
        printf("Valor actual de contador: %i \n\r", contador);
    }
    // imprime el valor final de contador
    printf("\n\nValor final de contador: %i", contador);
    return 0;
}

