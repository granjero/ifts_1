/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 19 de mayo de 2016, 10:43
 */
#include <stdio.h>
#include <cstdlib>

/*
 * 
 */
main() 
{
    float datos[5]; //este array contendrá los datos del archivo leido
    int i; //contador
    float suma = 0; //variable que tendrá el resultado de la suma
    float promedio; //variable que tendrá el promedio 
    float maximo; //variable para el maximo
    float minimo; //variable para el minimo
    
    FILE *temperaturas; //variable para leer los datos del archivo
    temperaturas = fopen ("temperaturas.txt", "r"); //abro el archivo temperaturas.txt en la variable temperaturas
    
    //este for recorrerá los primeros cinco datos y los pondrá en el array datos
    for  (i = 0; i < 5; i++)
    {
        fscanf(temperaturas, "%f", &datos[i]);
    }

   fclose(temperaturas); //cierro el archivo
    
    maximo = datos[0]; //asigo a máximo el primer valor del array datos
    minimo = datos[0]; //asigo a minimo el primer valor del array datos 
    
    //este for va a calcular el maximo y el minimo y sumar todos los valores para luego promediarlos
    for  (i = 0; i < 5; i++)
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
    promedio = suma / 5;
    
    //imprimo valores en pantalla
    printf("El promedio de las primeras cinco temperaturas es %f\n\n\r" , promedio);
    printf("El maximo de las primeras cinco temperaturas es %f\n\n\r" , maximo);
    printf("El minimo de las primeras cinco temperaturas es %f\n\n\r" , minimo);
    
    return 0;
}