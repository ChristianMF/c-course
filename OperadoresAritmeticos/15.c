/*//Problema: supermercado va disminuir al 15% los precios
//Dar precio y el programa debe de dar precios con y sin descuento

#include <stdio.h>

int main() {
    
    float precio,descuento,compraDescuento;
    
    printf("Dame el precio del producto: \n");
    scanf("%f",&precio);

    descuento = precio*.15;
    compraDescuento = precio-descuento;
    
    printf("El precio es: %.2f\nEl descuento es: %.2f\nEl precio con descuento es: %.2f",
            precio,descuento,compraDescuento);
    
    return 0;
}*/