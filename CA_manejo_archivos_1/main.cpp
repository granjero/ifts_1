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
    float datos[100];
    int i=0;
    int n;
    float suma = 0;
    float promedio;
    
    FILE *mediciones;
    mediciones = fopen ("mediciones.txt", "r");
    
    while(!feof(mediciones))
    {
        fscanf(mediciones, "%f", &datos[i]);
        i++;
    }
    
    n = i;
    
    fclose(mediciones);
    
    printf("La cantidad de datos del archivo son %d\n\r" ,i);
    
    for  (i = 0; i < n; i++)
    {
        suma = suma + datos[i];
        printf("El dato n%d es %f\n\r" ,i, datos[i]);
    }
    
    printf("La suma es %f\n\r" , suma);
    
    promedio = suma / n;
    
    printf("El promedio es %f\n\r" , promedio);
    
    return 0;
}

