#include <stdio.h>

int main() {

    //1. alumno solo puede reprobar 3 materias. si 4 no.
/*
    int reprobadas;
    
    printf("¿Cuantas materias has reprobado?\n");
    scanf("%i",&reprobadas);
    
    if(reprobadas>3) {
        printf("No puedes pasar de año");
    } else {
        printf("Sí puedes pasar de año");
    }
*/
    
    //2. Tarifas
    //De 1000 a 1500 Premium
    //De 500 a 999 Intermedia
    //De 100 a 499 Basica
    #define Tarifa1 "Premium"
    #define Tarifa2 "Intermedia"
    #define Tarifa3 "Basica"
    
    float tarifa;
    printf("¿Cuanto estas dispueso a pagar?\n");
    scanf("%f",&tarifa);
    
    if(tarifa>=1000 && tarifa<=1500) {
        printf("La tafira es: %s",Tarifa1);
    } else if (tarifa>=500 && tarifa<=999) {
        printf("La tafira es: %s",Tarifa2);
    } else if (tarifa>=100 && tarifa<=499) {
        printf("La tafira es: %s",Tarifa3);
    } else {
        printf("Numero fuera de rango");
    }
    
    return 0;
}

