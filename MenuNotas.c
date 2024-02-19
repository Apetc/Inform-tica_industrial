#include <stdio.h>
#include<windows.h>


int main(){
    int nota;
    do
    {
    printf("Introduce la nota del alumno: ");
    fflush(stdin);
    scanf("%i",&nota);
    if(nota<0||nota>10)
        printf("Escribe un valor entre 0 y 10\n");
    }while(nota<0||nota>10);

    switch (nota)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        printf("Supenso\n");
        break;
    case 5:
        printf("Aprobado\n");
        break;
    case 6:
    case 7:
        printf("Bien\n");
        break;
    case 8:
    case 9:
        printf("Notable\n");
        break;
    case 10:
        printf("Sobresaliente\n");
        break;
    
    default:
    printf("Valor no valido\n");
        break;
    }

    return 0;
}