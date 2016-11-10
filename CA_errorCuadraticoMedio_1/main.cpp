/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 28 de abril de 2016, 21:14
 */

#include <stdio.h>
#include <math.h>

/*
 * 
 */
double funcionRecta(double, double, double);
double sumaTerminos(float, float, float);


main() {
    //declaro variables
    int n; //cantidad de mediciones
    int i; // un contador
    float X[100]; //valores de mediciones en X
    float Y[100]; //valores de mediciones en Y
    float m; //pendiente de la recta 
    float b; //ordenada al origen
    float x;
    float FX[100]; //variable que usare en el proceso
    float resultadoParcial = 0;

    printf("Este programa calcula el Error Cuadrático Medio\n");
    printf("Ingrese la cantidad de mediciones hechas:\n");
    scanf("%d", &n);
    printf("Ingrese la pendiente de la recta m:\n");
    scanf("%f", &m);
    printf("Ingrese la ordenada al origen la recta b:\n");
    scanf("%f", &b);
    //recibo los valores de X
    for (i = 0; i < n; i++ )
    {
        printf("Ingrese las mediciones X%d:\n",i);
        scanf("%f", &X[i]);
    }
    //recibo los valores de Y
    for ( i = 0; i < n; i++ )
    {
        printf("Ingrese las mediciones Y%d:\n",i);
        scanf("%f", &Y[i]);
    }
    
    
   
    for ( i = 0; i < n; i++)
    {
       resultadoParcial = sumaTerminos(m, X[i], b);
       printf("%f\n\r",resultadoParcial);
    }
    
    resultadoParcial = ( resultadoParcial / n);
    
    printf("%f\n\r",resultadoParcial);
    
    resultadoParcial = sqrt( resultadoParcial );
    
    printf("%f\n\r",resultadoParcial);
    
    printf("El error cuadrado medio es %f:\n",resultadoParcial);
    
    return 0;
}

double funcionRecta(float M, float X, float B)
{
    double resultado;
    resultado = pow (2, ( M * X ) + B );
    return resultado;
}

double sumaTerminos(float M, float X, float B)
{
    double resultado;
    resultado = ( M * X ) + B;
    return resultado;
}
