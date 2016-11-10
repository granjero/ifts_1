/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 21 de mayo de 2016, 17:51
 */
#include <stdio.h>
#include <math.h>
#include <float.h>
/*
 * 
 */

//declaro funciones
float factorial(float);

main() 
{
    //variables
    float x = 1;
    float n = 1;
    float resultado = 0;
    
    for (x = 1; x < 35; x++)
    {
        printf("X %.0f N %.0f\n",x,n);
        printf("Resultado antes   %.2f\n",resultado);
        printf("suma              %.2f\n",(pow(x,n) / factorial(n)));
        resultado = resultado + (pow(x,n) / factorial(n));
        printf("Resultado despues %.2f\n",resultado);
        n++;
    }
    
    printf("\nResultado %.3f\n",resultado);      
    
    return 0;
}

//funciones
float factorial(float X)
{
    float resultado = 1;
    for (int i = 1; i <= X; i++)
    {
        resultado = resultado * i;
    }
    return resultado;
}