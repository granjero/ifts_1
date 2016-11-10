/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 21 de mayo de 2016, 11:07
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
    float S;
    float area;
    
    //recibe las variables que se igresan por teclado y las manda a las a,b y c
    printf("Este programa cacula la superficie de un triangulo con la medida de sus lados:\n");
    printf("Ingrese la medida del lado A:\n");
    scanf("%f",&a);
    printf("Ingrese la medida del lado B:\n");
    scanf("%f",&b);
    printf("Ingrese la medida del lado C:\n");
    scanf("%f",&c);
    
    //calcular S
    // S = (a+b+c)/2
    S = ( a + b + c ) / 2;

    //calcular area
    area = sqrt(S*(S-a)*(S-b)*(S-c));
    
    printf("El triángulo que tiene por lados\n");
    printf("A = %.2F\n",a);
    printf("B = %.2F\n",b);
    printf("C = %.2F\n",c);
    printf("tiene un área de %.2F\n",area);
}