/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 26 de mayo de 2016, 18:29
 */

#include <stdio.h>
#include <cstdlib>

/*
 * 
 */
main()
{
    float datos[1024]; //este array contendrá los datos del archivo leido
    int i=0; //contador
    int n;
    float maximo; //variable para el maximo
    
    FILE *archivo; //variable para leer los datos del archivo
    
    archivo = fopen("file.txt", "r");
    
    while(!feof(archivo))
    {
        fscanf(archivo, "%f", &datos[i]);
        i++;
    }
    
    n = i;
    
    fclose(archivo);
    
    maximo = datos[0];
    
    for  (i = 0; i < n; i++)
    {
        //este if compara el valor de datos con maximo, si ese valor es mayor se lo asigna a la variable
        if (datos[i] > maximo)
        {
            maximo = datos[i];
        }
    }
    
    printf ("El archivo file.txt tiene %i valores\n", n);
    printf ("El valor máximo es %.0f\n", maximo);
        
    return 0;
}

