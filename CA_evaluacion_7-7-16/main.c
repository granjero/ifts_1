/* 
 * File:   main.c
 * Author: juanmiguel
 *
 * Created on 7 de julio de 2016, 18:43
 */
#include <stdio.h>
#include "math.h"

/*
 * 
 */

float coseno(float);

main()
{
    //float valorIngresado;
    
    float valorCalculado0;
    float valorCalculado1;
    float resultado = 100;
    float tolerancia;
    int i = 0;
    
    //PIDE el primer valor
    printf("\nIngrese un numero: \n");
    scanf("%f",&valorCalculado0);
    
    //PIDE la tolerancia
    printf("\nIngrese la tolerancia: \n");
    scanf("%f",&tolerancia);
    
    
    while (resultado > tolerancia)
    {
        valorCalculado1 = coseno(valorCalculado0);
        resultado = fabs(valorCalculado0 - valorCalculado1);
        printf("X0 = %f\n" , valorCalculado0);
        printf("X1 = %f\n", valorCalculado1);
        printf("resultado = %f\n\n", resultado);
        valorCalculado0 = valorCalculado1;        
    }
    
    return (0);       
}

float coseno(float valor)
{
    float resultadoSeno;
    resultadoSeno = cos(valor);
    return resultadoSeno;
}