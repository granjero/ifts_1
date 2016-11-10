/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 21 de mayo de 2016, 15:23
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
    float resultado;
    
    //recibe las variables que se  igresan por teclado    
    printf("Ingrese un numero natural para calcular su factorial:\n");
    
    scanf("%f",&x);
    
    resultado = factorial(x);

    printf("Resultado %.5F\n",resultado);            
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