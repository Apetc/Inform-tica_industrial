#include <stdio.h>
#include <windows.h>
void clearInputBuffer(){
    int c;
    while((c=getchar()) !='\n'&& c!=EOF);
}

int main(){

    int opciones[4]={0};
    int opcion;

    printf(" Menu \n 1. Opcion 1 \n 2. opcion 2 \n 3. opcion 3 \n 4. opcion 4");
    printf("\nIntroduzca la opcion deseada: ");
    for(int i=0;i<4;i++){
        scanf("%i",&opcion);
        if(opcion<1||opcion>4||opciones[opcion-1]!=0){
            printf("Tu eleccion no es valida, eliga de nuevo\n");
            clearInputBuffer();
            i--;
        }
        else{
            opciones[opcion-1]=1;

            switch (opcion)
            {
            case 1:
                printf("Elegiste la opcion 1\n");
                break;
            case 2:
                printf("Elegiste la opcion 2\n");
                break;
            case 3:
                printf("Elegiste la opcion 3\n");
                break;
            case 4:
                printf("Elegiste la opcion 4\n");
                break;
            }
        }

    }
    printf("Elgiste todas las opciones\n");
    return 0;
}