/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 21 de mayo de 2016, 11:40
 */
#include <stdio.h>
#include <math.h>
/*
 * 
 */

//declaro funciones
float menor120(float);
float mayor120(float);

main() 
{
    //variables
    float r;
    float resultado;
    
    //recibe las variables que se igresan por teclado    
    printf("Ingrese el valor de R:\n");
    scanf("%f",&r);
    
    if (r > 0 && r < 120)
    {
        resultado = menor120(r);
        printf("Resultado %.2F\n",resultado);
    }
    
    if (r >= 120)
    {
        resultado = mayor120(r);
        printf("Resultado %.5F\n",resultado);
    }
    
    if (r <= 0)
    {
        printf("No se contempla el cero o numeros menores a 0\n");
    }
    
    return 0;
}

float menor120(float R)
{
    float resultado;
    resultado = 17 - (0.485 * pow(R,2));
    return resultado;    
}

float mayor120(float R)
{
    float resultado;
    resultado = 18 / (1 + pow(R,2) / 18.23);
    return resultado;
}