/*
24000 en 12 meses 
vs
1900al mes + el 75% de dos meses
*/

#include <stdio.h>

int main(){
    float FdeA,otra_opcion; //FdeA, dinero en bruto al final de año
    float pagos_mes, porcentaje;
    int cant_meses;
    printf("Pago en bruto al final de anyo:");
    scanf("%f",&FdeA);
    printf("A continuacion introduce cual es su otra opcion de pagos al mes, junto a la cantidad de meses de pagos extra y su porcentaje\n");
    scanf(" %f %i %f",&pagos_mes,&cant_meses,&porcentaje);
    otra_opcion = pagos_mes*12;
    porcentaje = porcentaje/100;
    float pagos_extra = pagos_mes*cant_meses*porcentaje;
    otra_opcion = otra_opcion + pagos_extra;
    if (FdeA>otra_opcion){
        float diferencia = FdeA - otra_opcion;
        printf("La primera opcion es mejor ya que cobras %.1f mas al final de anyo\n", diferencia);
        return 0;
    }
    float diferencia = otra_opcion - FdeA;
    printf("La segunda opcion es mejor ya que cobras %.1f mas al final de anyo\n", diferencia);

    return 0;
}