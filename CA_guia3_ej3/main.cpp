/* 
 * File:   main.cpp
 * Author: juanmiguel
 *
 * Created on 19 de mayo de 2016, 11:21
 */
#include <stdio.h>
#include <cstdlib>
/*
 * 
 */
//defino el esqueleto de las funciones
float calculaTemp(float);
float calculaHum(float);

main() 
{
    //variables
    char fecha[9]; //variable para los 10 digitos de la fecha
    char hora[7]; //variablep para la hora
    float canal1; //variablep para el dato del canal 1
    float canal2; //variablep para el canal 2
    float canal3; //variablep para el canal 3
    float canal4; //variablep para el canal 4
    float sumTemperatura = 0; //sumatoria de las temperaturas
    float temperatura; //valor final de la Temp
    float sumHumedad = 0 ; //sumatoria de la humedad
    float humedad; //valor final de la humedad
    float CO2ppm = 0; //sumatoria de las particulas de diooxido
    float n; //cantidad de filas del archivo
    
    FILE *mediciones; //variable para abrir del archivo
    
    mediciones = fopen ("mediciones.txt", "r"); //abro el archivo mediciones.txt en la variable mediciones
    
    //este while recorre mediciones hasta el final 
    while(!feof(mediciones))
    {        
        fscanf(mediciones, "%s %s %f %f %f %f", fecha, hora, &canal1, &canal2, &canal3, &canal4); //lee una linea del archivo       
        sumTemperatura = sumTemperatura + calculaTemp(canal1); //suma el calculo de temperatura hecho con la funcion calculaTemp
        //printf("SUM Temp = %f\n\n\r" , sumTemperatura); //debug        
        sumHumedad = sumHumedad + calculaHum(canal2); //suma la humedad
        //printf("SUM Hum = %f\n\n\r" , calculaHum(canal2)); //debug        
        CO2ppm = CO2ppm + canal3; //suma el CO2                          
        n++; //incrementa en uno el valor de n                
    }
    
    temperatura = sumTemperatura / n; //promedia la temp
    humedad = sumHumedad / n; //promedia la hum
    CO2ppm = CO2ppm / n; //promedia el co2
    
    fclose(mediciones); //cierro el archivo

    printf("Cantidad de mediciones = %.0f\n\n\r" , n);
    printf("Ultima linea del archivo: %s %s %.0f %.0f %.0f %.0f \n\n\r" , fecha, hora, canal1, canal2, canal3, canal4);
    printf("Promedio de Temperatura: %.3f\nPromedio de Humedad: %.3f\nPromedio de CO en ppm: %.3f \n\n\r" , temperatura, humedad, CO2ppm);

    return 0;
}
//la definicion de las funcioe
float calculaTemp(float valorCanal1)
{
    float resultado;
    resultado = valorCanal1/100;
    return resultado;
}

float calculaHum(float valorCanal2)
{
    float resultado;
    float resultadoParcial;
    resultadoParcial = valorCanal2-0.62;
    resultado = resultadoParcial / 0.0062;
    return resultado;
}