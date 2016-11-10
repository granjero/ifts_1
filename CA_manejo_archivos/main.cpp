/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 12 de mayo de 2016, 19:36
 */
#include <stdio.h>
#include <cstdlib>

/*
 * 
 */
main() 
{
    float datos[5];
    int i;
    float suma = 0;
    float promedio;
    
    FILE *mediciones;
    mediciones = fopen ("mediciones.txt", "r");
    
    for  (i = 0; i < 5; i++)
    {
        fscanf(mediciones, "%f", &datos[i]);
    }
    
    fclose(mediciones);
    
    for  (i = 0; i < 5; i++)
    {
        suma = suma + datos[i];
        printf("El dato n%d es %f\n\r" ,i, datos[i]);
    }
    
    printf("La suma es %f\n\r" , suma);
    
    promedio = suma / 5;
    
    printf("El promedio es %f\n\r" , promedio);
    
    return 0;
}

