/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 20 de mayo de 2016, 23:56
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
    float D;
    float x1;
    float x2;
    
    //recibe las variables que se igresan por teclado y las manda a las a,b y c
    printf("Este programa resuelve una ecuación cuadrática:\n");
    printf("ax^2+bx+c\n");    
    printf("Ingrese la variable A:\n");
    scanf("%f",&a);
    printf("Ingrese la variable B:\n");
    scanf("%f",&b);
    printf("Ingrese la variable C:\n");
    scanf("%f",&c);
    //imprime las variables ingresadas
    printf("Las varibles ingresadas son: A=%.1f B=%.1f C=%.1f \n\n",a,b,c);
    printf("La ecuación cuadrática a calcular es: y = %.0fx^2 + %1.0fx + %.0f\n\n",a,b,c);
    
    //calcular D
    // D = b²-4*a*c
    D = ( ( b * b ) - ( 4 * a * c ) );    
    
    //printf("D = %f\n\n\n",D);
    
    //evaluo si D es menor a cero.
    //Si es menor a cero la funcion no tiene raices
    if(D < 0)
    {
        printf("Esta función no tiene raíces");
    }
    
    //si es igual o mayor a cero
    else
    {
        printf("El discriminante es  D=%.0f \n\r\n\r",D); 
        //calculo x1 y x2
        x1 = ( -b + (sqrt(D)) ) / ( 2 * a );
        x2 = ( -b - (sqrt(D)) ) / ( 2 * a );
        
        printf("Las raices son x1=%.3f y x2=%.3f",x1,x2);       
    }
}