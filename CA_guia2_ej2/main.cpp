/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 21 de mayo de 2016, 17:41
 */
#include <stdio.h>
#include <math.h>
/*
 * 
 */

//declaro funciones
float factorial(float);

main() 
{
    //variables
    float x;
    float n;
    float resultado;
    
    //recibe las variables que se  igresan por teclado    
    printf("Ingrese x y n para calcular: x^n/n! \n\n");
    
    printf("X = ");
    scanf("%f",&x);
    printf("N = ");
    scanf("%f",&n);
    
    resultado = pow(x,n) / factorial(n);

    printf("\nResultado %.3F\n",resultado);      
    
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