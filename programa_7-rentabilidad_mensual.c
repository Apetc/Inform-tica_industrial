#include <stdio.h>
#include <stdlib.h>
#define impuestos .19

float rentmensual(float euro,float TAE); 
int main(){
    float r_neto,r_bruto,v1, v2; //r_neto/bruto = rentabilitidad neto/bruto
    float impuesto = impuestos;
    printf("Introduzca por favor la cantidad en dinero con el TAE asociado\n");
    scanf("%f %f",&v1,&v2);

    r_bruto = rentmensual(v1,v2);
    r_neto = r_bruto - r_bruto*impuesto;
    printf("La rentabilidad mensual es de %.2f",r_neto);
    
    return 0;
}

float rentmensual(float euro, float TAE){
    if (TAE>100||TAE<0){
        printf("El valor ha de encontrarse entre 0 y 100");
        exit(1);
    }
    float i= euro*(TAE/100)/12; //TAE es anual(12meses), buscamos la rentabilidad mensual*(1mes)
    return i;
}