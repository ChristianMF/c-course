/*//Tipo de datos en C

#include <stdio.h>
#include <stdbool.h>

int main() {
    
    //Datos primitivos: int, char, float, bool, double, short, long, long double
    //Boolean: con libreria #include <stdbool.h>
    
    short v = 2; //2 bytes Rango desde -128->127
    int a = 1; //2 bytes Rango desde -32768->32767
    unsigned int f = 123; //solo positivo 2 bytes Rango desde 0->65535
    long e = 12345; //4 bytes
    char b = 'z'; //1 byte Rango desde 0->255
    float c = 1.5; //4 bytes 
    double d = 1.55555555; //8 bytes 
    
    printf("El valor short es de: %hi\n",v);
    printf("El valor entero es de: %i\n",a);
    printf("El valor unsigned entero es de: %u\n",f);
    printf("El valor long es de: %li\n",e);
    printf("El valor char es de: %c\n",b);
    printf("El valor float es de: %f\n",c);
    printf("El valor double es de: %lf\n",d);
    
    
    
    return 0;
}*/