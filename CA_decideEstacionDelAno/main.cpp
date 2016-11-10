#include <cstdlib>
#include <stdio.h>
#include <math.h>

/*
 * Se ingresa el dia y el mes y devuelve la estación del año.
 */

main() 
{
    //defino variables que serán recibidas
    int mes;
    int dia;
    //imprime mensajes en pantalla y espera para reibir los valores de dia y mes
    printf("AVERIGUE LA ESTACIÓN DEL AÑO SEGÚN LA FECHA INGRESADA:\n\n\n\r");
    
    printf("ingrese el dia formato dd:\n\r");
    scanf("%d",&dia);
    
    printf("ingrese el mes formato mm:\n\r");
    scanf("%d",&mes);
    printf("\n\n");
    switch (mes)
    {
        //si se ingresó 1 (enero) o 2 (febrero) 
        //imprime VERANO
        case 1: case 2:
            printf("La estación es VERANO");
            break;
        
        //si se ingresó 4 (abril) o 5 (mayo)
        //imprime OTOÑO   
        case 4: case 5:
            printf("La estación es OTOÑO");
            break;
        //si se ingresó 7 (julio) u 8 (agosto)
        //imprime INVIERNO    
        case 7: case 8:
            printf("La estación es INVIERNO");
            break;
        //idem con octubre y noviembre    
        case 10: case 11:
            printf("La estación es PRIMAVERA");
            break;
        //si se ingresa marzo hay que decidir si estoy antes o despues de que cambie la estacion
        case 3:
        {
            //si el dia ingresado es menor a 21 imprime VERANO si es mayor a 21 imrime OTOÑO
            if (dia<21)
            {
                printf("La estación es VERANO");
                break;
            }
            else
            {
                printf("La estación es OTOÑO");
                break;
            }
        }
        //si ingresa julio hay que decidir entre OTOÑO o INVERNO
        case 6:
        {
            if (dia<21)
            {
                printf("La estación es OTOÑO");
                break;
            }
            else
            {
                printf("La estación es INVIERNO");
                break;
            }        
        }
        //si se ingresa septiembre hay que decidir entre INVIERNO y PRIMAVERA
        case 9:
        {
            if (dia<21)
            {
                printf("La estación es INVIERNO");
                break;
            }
            else
            {
                printf("La estación es PRIMAVERA");
                break;
            }        
        }
        //en diciembre elijo entre PRIMAVERA y VERANO
        case 12:
        {
            if (dia<21)
            {
                printf("La estación es PRIMAVERA");
                break;
            }
            else
            {
                printf("La estación es VERANO");
                break;
            }        
        }
    }
    
    
    return 0;
}

