#include <stdio.h>

int main(){
    char letra;
    //65 A-90 Z / 97 a- 122 z -- +32
    scanf("%c",&letra);
    int valor = letra;
    if (valor>=65 && valor<=90)
    {

        printf("Valor es mayuscula\n");
        valor = valor +32;
        letra = valor;
        printf("Su minuscula es %c",letra);
    }
    else if (valor>=97 && valor<=122)
    {
        printf("Valor es minuscula\n");
        valor = valor -32;
        letra = valor;
        printf("Su mayuscula es %c",letra);
    }
    else{
        printf("Valor no es una letra\n Sugerencia: Aprenderse el abecedario\n");
    }


    return 0;
}