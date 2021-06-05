/*//Transformar años a meses
//Meses a semanas. Semanas a dias. Dias a horas.
//1h=12m
//1m=4s
//1s=7d
//1d=24h
//Pedir usuario que digite la cantidad de años con las que se hará la conversión

#include <stdio.h>

int main() {
    int edad;
    float meses,semanas,dias,horas;
    
    printf("Digita tu edad\n");
    scanf("%i",&edad);
    
    meses = edad*12;
    semanas = meses*4;
    dias = semanas*7;
    horas = dias*24;
    
    printf("Tu edad es: %i\nTu edad en meses es: %.2f\nTu edad en semanas es: %.2f\nTu edad en dias es: %.2f\nTu edad en horas es: %.2f",edad,meses,semanas,dias,horas);
    
    return 0;
}*/