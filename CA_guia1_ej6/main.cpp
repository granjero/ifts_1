/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 21 de mayo de 2016, 17:32
 */
#include <stdio.h>
#include <math.h>
/*
 * 
 */
main() 
{
    //variables
    float a;
    float b;
    float c;
    float mayor;
    
    //recibe las variables que se igresan por teclado y las manda a las a,b y c
    printf("Este programa cacula el mayor de tres numeros reales:\n");
    printf("Ingrese el primero:\n");
    scanf("%f",&a);
    printf("Ingrese el segundo:\n");
    scanf("%f",&b);
    printf("Ingrese el tercero:\n");
    scanf("%f",&c);
    
    //calcular mayor
    mayor = a;
    
    if (mayor < b)
    {
        mayor = b;
    }
    
    if (mayor < c)
    {
        mayor = c;
    }
    
    printf("\nEl mayor de los numeros ingresados es %.0F\n",mayor);
}