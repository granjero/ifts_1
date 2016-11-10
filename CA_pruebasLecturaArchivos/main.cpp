/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 19 de mayo de 2016, 17:34
 */

#include <stdio.h>
#include <string.h>
#include <cstdlib>

/*
 * 
 */

main() 
{
    char dato1[16]; //este array multidimensiona contendrá los datos del archivo leido el 500 es la cantidad de filas y el 6 la cantidad de columnas 
    char dato2[16];
    char arrayDatosLeidos[255];
    int i=0; //contador de filas
    int j=0;
    int n;
    
    FILE *archivo; //variable para leer los datos del archivo
    archivo = fopen ("test.txt", "r"); //abro el archivo archivo.txt en la variable archivo
    
    //este while recorrerá los datos hasta el final del archivo y los pondrá en el array datos
    while(!feof(archivo))
    {
        fscanf(archivo, "%s %s", dato1, dato2);
    }

    n = i; //en la variable n pongo la cantiad de datos que había para usarla despues en el promedio    
    fclose(archivo); //cierro el archivo
    
    printf("N = %d\n\n\r" , n);
    
    j=0;
    for(i=0; i<10; i++)
    {
        printf("%c\n" , arrayDatosLeidos[j]);
        j++;
        //printf("%c\n" , dato1[i]);
        //printf("%c\n" , dato2[i]);
    }
    return 0;
}

//Este funciona y me devuelve la ultima linea del archivo
/*
main() 
{
    char datosLeidos[16]; //este array multidimensiona contendrá los datos del archivo leido el 500 es la cantidad de filas y el 6 la cantidad de columnas 
    char arrayDatosLeidos[255];
    int i=0; //contador de filas
    int n;
    
    FILE *archivo; //variable para leer los datos del archivo
    archivo = fopen ("test.txt", "r"); //abro el archivo archivo.txt en la variable archivo
    
    //este while recorrerá los datos hasta el final del archivo y los pondrá en el array datos
    while(!feof(archivo))
    {
        fgets(datosLeidos, 100, archivo);        
        //fscanf(archivo, "%d", datosLeidos[i]);
        //fscanf(mediciones, "%f", &datosLeidos[i]);
        i++;
    }

    n = i; //en la variable n pongo la cantiad de datos que había para usarla despues en el promedio    
    fclose(archivo); //cierro el archivo
    
    printf("N = %d\n\n\r" , n);
    for(i=0; i<10; i++)
    {
        printf("%c" , datosLeidos[i]);
    }
    return 0;
}
 */