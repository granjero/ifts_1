/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 31 de marzo de 2016, 21:08
 */

//#include <cstdlib>
//#include <stdfix.h>
#include <stdio.h>
//using namespace std;

/*
 * 
 */
int main() 
{
    int edad;
    
    //fechas ingresadas por el usuario
    int dia;
    int mes;
    long ano;
    //fecha harcodeada
    int diaHoy;
    int mesHoy;
    long anoHoy;
    
    diaHoy=31;
    mesHoy=3;
    anoHoy=2016;
    
    
    printf("Ingrese su fecha de nacimiento\n");
    printf("día:\n");
    scanf("%d",&dia);
    printf("mes:\n");
    scanf("%d",&mes);
    printf("año:\n");
    scanf("%d",&ano);    
    edad=anoHoy-ano;
    
    if(mes>mesHoy)
    {
        printf("usted tiene %d años",edad-1);
    }
    
    if(mes<mesHoy)
    {
        printf("usted tiene %d años",edad);
    }
    
    if (mes==mesHoy)
    {
        if(dia>=diaHoy)
        {
            printf("usted tiene %d años",edad);
        }
        else
        {
            printf("usted tiene %d años",edad-1);
        }
    }    
}