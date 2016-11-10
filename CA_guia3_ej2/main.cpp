/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 19 de mayo de 2016, 11:09
 */
#include <stdio.h>
#include <cstdlib>

/*
 * 
 */
main() 
{
    float datos[500]; //este array contendrá los datos del archivo leido
    int i=0; //contador
    int n;
    float suma = 0; //variable que tendrá el resultado de la suma
    float promedio; //variable que tendrá el promedio 
    float maximo; //variable para el maximo
    float minimo; //variable para el minimo
    
    FILE *temperaturas; //variable para leer los datos del archivo
    temperaturas = fopen ("temperaturas.txt", "r"); //abro el archivo temperaturas.txt en la variable temperaturas
    
    //este while recorrerá los datos hasta el final del archivo y los pondrá en el array datos
    while(!feof(temperaturas))
    {
        fscanf(temperaturas, "%f", &datos[i]);
        i++;
    }

    n = i; //en la variable n pongo la cantiad de datos que había para usarla despues en el promedio    
    fclose(temperaturas); //cierro el archivo
    
    printf("N = %d\n\n\r" , n);
    
    maximo = datos[0]; //asigo a máximo el primer valor del array datos
    minimo = datos[0]; //asigo a minimo el primer valor del array datos 
    
    //este for va a calcular el maximo y el minimo y sumar todos los valores para luego promediarlos
    for  (i = 0; i < n; i++)
    {
        //este if compara el valor de datos con maximo, si ese valor es mayor se lo asigna a la variable
        if (datos[i] > maximo)
        {
            maximo = datos[i];
        }
        //este if compara el valor de datos con minimo, si ese valor es menor se lo asigna a la variable
        if (datos[i] < minimo)
        {
            minimo = datos[i];
        }
        //aca va sumando los valores
        suma = suma + datos[i];
        //printf("El dato n%d es %f\n\r" ,i, datos[i]);
    }
    
    //aca divido el valor de suma por 5 para el promedio
    promedio = suma / n;
    
    //imprimo valores en pantalla
    printf("El promedio de las temperaturas es %f\n\n\r" , promedio);
    printf("El maximo de las temperaturas es %f\n\n\r" , maximo);
    printf("El minimo de las temperaturas es %f\n\n\r" , minimo);
    
    return 0;
}