/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 14 de abril de 2016, 20:03
 */

// #include <cstdlib>
#include <stdio.h>
#include <math.h>

/*
 * TEOREMA DE BOLSANO con for
 * funcion f(x) = cos(x)-x 
 */

float funcion(float);

main() 
{
        //declaración de variables parae programa
    float a0;
    float b0;
    float a1;
    float b1;
    float m0;
    float m1;
    float d0;
    float d1;
    float criterio;
    int i = 0;
    
    printf("Se calculará mediante el teorema de bolsano el cero de la función \n\rf(x)=cos(x)-x entre dos valores dados\n\n\r");
    printf("Ingrese el valor de A0:\n\r");
    scanf("%f", &a0);
    printf("Ingrese el valor de B0:\n\r");
    scanf("%f", &b0);
    printf("Ingrese el criterio de parada:\n\r");
    scanf("%f", &criterio);
    
    m0=((a0+b0)/2);
    d0=fabs((b0-a0)/2);

    while(criterio < d0)
    {
        i++;
        d0=fabs((b0-a0)/2);
        //si f(a0) * f(m0) menor a 0
        if ((funcion(a0) * funcion(m0)) < 0)
        {
            //printf ("negativo\n\r");
            m1=((a0+b0)/2);
            a0=a0;
            b0=m0;
            m0=m1;                        
        }
        //si f(a0) * f(m0) mayor a 0
        else
        {
            //printf("positivo\n\r");
            m1=((a0+b0)/2);
            a0=m0;
            b0=b0;
            m0=m1;
        }
    }    
    printf("el cero es aproximadamente %.30f\n\r",m0);
    printf("iteraciones %d\n\r",i);

    return 0;
}

float funcion(float x0)
{
    float resultado;
    resultado = cos(x0) - x0;
    return resultado;
}