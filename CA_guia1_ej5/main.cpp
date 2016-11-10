/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 21 de mayo de 2016, 15:00
 */
#include <stdio.h>
#include <math.h>
/*
 * 
 */

//declaro funciones
float funcion(float);

main() 
{
    //variables
    float x;
    float resultado;
    
    //recibe las variables que se  igresan por teclado    
    printf("Ingrese el valor de X entre -1 y 1:\n");
    
    scanf("%f",&x);
    if (x >= -1 && x <= 1)
    {
        resultado = funcion(x);

        printf("Resultado %.5F\n",resultado);    
    }
    
    else
    {
        printf("El valor de X debe estar entre -1 y 1");
    }
        
}

//funciones
float funcion(float X)
{
    float resultado;
    resultado = X * (2 / M_PI) * (1 -(pow(X,2) / 6) + (pow(X,4) / 40) - (pow(X,6) / 336) + (pow(X,8) / 3456));
    return resultado;    
}