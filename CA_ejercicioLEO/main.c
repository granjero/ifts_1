#include <stdio.h>
int main() 
{
    float columna1[100]; // variables donde vas a almacenar los datos de la col 1
    float columna2[100]; // vriable para la otra columna
    float sumaCol1 = 0;
    float sumaCol2 = 0;
    float promCol1 = 0;
    float promCol2 = 0;
    int i = 0; //contador
    int n = 0; //será la cantidad de filas del archivo
    
    FILE *archivo; // variable tipo FILE 
    
    // esto es lo que lee el archivo  
    archivo = fopen("pt100.txt", "r+"); //abris el archivo
    //el while que sigue recorre el archivo hasta que termina
    while(!feof(archivo)) // !feof yo lo uso la otra forma es igularlo a 0 me parece
    {
        fscanf(archivo, "%f %f", &columna1[i], &columna2[i]); //escanea la variable archivo yo se que son dos culumnas por esfo hay dos %f
/*
        printf("%f",columna1[i]);
        printf("\n");
        printf("%f",columna2[i]);
        printf("\n");
*/
        i++;
        n++;
        
    }

        
    //suma la columna 1 y lo guarda en la variable temporal sumaCol1
    for (i = 0; i < n; i++)
    {
        sumaCol1 = sumaCol1 + columna1[i];
    }
    
    
    //columna 2 
    for (i = 0; i < n; i++)
    {
        sumaCol2 = sumaCol2 + columna2[i];    
    }
        
    printf("\nResultado:\n\n");
    
    promCol1 = sumaCol1 / n;
    
    promCol2 = sumaCol2 / n;
    
    printf("Columna 1 = %f\n",promCol1);
    printf("Columna 2 = %f\n",promCol2);

    return 0;
}