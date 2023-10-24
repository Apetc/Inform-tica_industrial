#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define impuestos .19

double rentmensual(double euro,double TAE, double month); 
int main(){
    double r_neto,r_bruto,v1,v2,v3;
    double impuesto = impuestos;
    printf("Introduzca por favor la cantidad en dinero con el TAE asociado\n");
    scanf("%lf %lf %lf",&v1,&v2, &v3);

    r_bruto = rentmensual(v1,v2,v3);
    printf("\nLa acumulacion para el ultimo mes antes de impuestos sera de %.2lf",r_bruto);
    r_neto = r_bruto -((r_bruto - v1)*impuesto);

    printf("\nLa acumulacion para el ultimo mes tras impuestos sera de %.2lf",r_neto);
    return 0;
}

double rentmensual(double euro, double TAE, double month){
    double int_nominal, tin_mensual, resultado, aux;
    if (TAE>100||TAE<0){
        printf("El valor ha de encontrarse entre 0 y 100 \n");
        exit(1);
    }
    int_nominal = 12*(pow((TAE/100 + 1),1.0/12) - 1);
    tin_mensual = 100*(int_nominal/12); //esto es lo que pide el ejercicio, pero hice todo jeje
    printf("Su interes nominal sera de: %lf \nSu TIN mensual sera de: %lf \n",int_nominal, tin_mensual);
    
    resultado = euro + euro* (tin_mensual/100.0);
    for(int i = 0; i<month-1;i++){                             //le resto 1 al mes porque con el anteriormente ya hago la operación una vez
        resultado = resultado + resultado*(tin_mensual/100.0); //esto se debe a que necesito calcular 1 vez con los euros, y otra con su nuevo valor
        //printf("\n%lf",resultado);
    }
    return resultado;
}