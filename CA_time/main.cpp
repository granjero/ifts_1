/* 
 * File:   time.c
 * Author: juanmiguel
 *
 * Created on 5 de abril de 2016, 19:10
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 
 */
int main() {

    time_t fecha;
    
    fecha = time(NULL);
    printf("%ld",fecha);
}

