#include <stdio.h>

main(){
int selector = 0; //Selector del menú
int n1,n2;        //Números a operar
int resultado;    //Resultado de la operacion
int flag= 0;      //Marca si se muestra los resultados
//Menu de opciones
printf(" 1. Sumar \n 2. Restar \n 3. Multiplicar \n 4. Dividir -- Cociente\n 5. Dividir -- resto");
//Solititud opcion
printf("Introduce la opción deseada: \n");
scanf("%i",&selector);
//Solicitud valores
printf("Introduce tus valores 2 valores: \n");
scanf("%i %i",&n1,&n2);
printf("%i %i %i ",selector,n1,n2);
switch (selector)
{
case 1://sumar
    resultado = n1 + n2;
    flag = 1;
    break;
case 2://restar
    resultado = n1 - n2;
    flag = 1;
    break;
case 3://multiplicar
    resultado = n1 * n2+0.0;
    flag = 1;
    break;
case 4://divir--cociente
    resultado = n1 / n2+0.0;
    flag = 1;
    break;
case 5://dividir--resto
    resultado = n1 % n2+0.0;
    flag = 1;
    break;
default:
    printf("Valores no validos");
    return 0;
    //return 0;//Forma imprimir resultado numero 2
}
if(flag){//Forma imprimir resultado numero 2
    printf("\nEl resultado es: %i", resultado);
}
// printf("\nEl resultado es: %i",resultado);//Forma de imprimir resultado numero 2

return 0;
}
