/*//Aumentar el salario en una empresa el 10%

#include <stdio.h>

int main() {
    
    char nombre[40];
    int salario;
    float aumentoSalario;
    
    //Insertar nombre
    printf("Inserte su nombre: \n");
    gets(nombre);
    printf("Su nombre es: %s\n",nombre);
    
    //salario
    printf("Inserte su salario: \n");
    scanf("%i",&salario);
    printf("Su salario es: %i\n",salario);
    
    //Aumento
    aumentoSalario = salario*1.1;
    printf("Felicidades %s tu salario ahora es de %.2f",nombre,aumentoSalario);
    
/*
    for(int i=0;i<10;i++) {
        printf("%i",i);
    }
    
    return 0;
}*/