/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 7 de abril de 2016, 21:07
 */

#include <stdio.h>
#include <math.h>

/*
 * 
 */
main() 
{
    //declaración de variables parae programa
    float a;
    float b;
    float c;
    float D;
    float x1;
    float x2;
    
    //recibe las variables que igresa el usuario y las manda a las variables a,b y c
    printf("Este programa resuelve una ecuación cuadrática:\n");
    printf("Ingrese la variable A:\n");
    scanf("%f",&a);
    printf("Ingrese la variable B:\n");
    scanf("%f",&b);
    printf("Ingrese la variable C:\n");
    scanf("%f",&c);
    //imprime las variables ingresadas
    printf("Las varibles ingresadas son: A=%f B=%f C=%f \n\n",a,b,c);
    printf("La ecuación cuadrática a calcular es: y= %10.2f x^2+ %10.2f x +  %10.2f\n\n",a,b,c);
    
    //calcular D
    // D = b²-4*a*c)
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
        printf("El discriminante es  D=%f \n\r\n\r",D); 
        //calculo x1 y x2
        x1 = ( -b + (sqrt(D)) ) / ( 2 * a );
        x2 = ( -b - (sqrt(D)) ) / ( 2 * a );
        
        printf("Las raices son x1=%f y x2=%f",x1,x2);       
    }
}

