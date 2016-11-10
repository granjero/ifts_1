/* 
 * File:   main.c
 * Author: juanmiguel
 *
 * Created on 14 de julio de 2016, 20:04
 */

// #include <cstdlib>
#include <stdio.h>
#include "math.h"

/*
 * 
 * funcion f(x) = cos(x)-x 
 */

double funcion(double);

main() 
{
        //declaración de variables parae programa
    double a0;
    double b0;
    double a1;
    double b1;
    double m0;
    double m1;
    double d0;
    double d1;
    double criterio;
    int i = 0;
    
    printf("Se calculará mediante el teorema de bolsano el cero de la función \n\rf(x)=cos(x)-x entre dos valores dados\n\n\r");
    printf("Ingrese el valor de A0:\n\r");
    scanf("%e", &a0);
    printf("Ingrese el valor de B0:\n\r");
    scanf("%e", &b0);
    printf("Ingrese el criterio de parada:\n\r");
    scanf("%e", &criterio);
    
    m0 = a0 - ((funcion(a0) * (b0 - a0)) / (funcion(b0) - funcion(a0)));
   
    d0 = ((b0-a0)/2);

    while(criterio < d0)
    { 
        i++;
        d0 = ((b0-a0)/2);
        //si f(a0) * f(m0) menor a 0
        if ((funcion(a0) * funcion(m0)) < 0)
        {
            //printf ("negativo\n\r");
            m1 = a0 - ((funcion(a0) * (b0 - a0)) / (funcion(b0) - funcion(a0)));
            a0 = a0;
            b0 = m0;
            m0 = m1;
            printf("menor\n\r");
        }
        //si f(a0) * f(m0) mayor a 0
        else
        {
            //printf("positivo\n\r");
            m1 = a0 - ((funcion(a0) * (b0 - a0)) / (funcion(b0) - funcion(a0)));
            a0 = m0;
            b0 = b0;
            m0 = m1;
            printf("mayor\n\r");
        }
        
        
    }    
    printf("el cero es aproximadamente %e\n\r",m0);
    printf("iteraciones %d\n\r",i);
    

    return 0;
}

double funcion(double x0)
{
    double resultado;
    resultado = cos(x0) - x0;
    return resultado;
}