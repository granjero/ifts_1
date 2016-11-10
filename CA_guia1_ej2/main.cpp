/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 21 de mayo de 2016, 10:55
 */
#include <stdio.h>
/*
 * 
 */

//funciones
float FaC(float);

main() 
{
    //variables
    float farenheit;
    float celsius;
    
    //recibe las variables que se igresan por teclado y las manda a las a,b y c
    printf("Este programa tranforma de grdos F a grados C:\n");
    printf("Ingrese la temp en farenheit A:\n");
    scanf("%f",&farenheit);
    
    celsius = FaC(farenheit);
    //si es igual o mayor a cero
    printf("\n\n%.2f grados Farenheit son %.2f grados Celsius",farenheit,celsius);       
    return 0;
}

float FaC(float F)
{
    float C;
    C = (F-32)*50/90;
    return C;
}