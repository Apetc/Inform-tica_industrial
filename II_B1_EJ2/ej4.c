#include <stdio.h>
//#include <windows.h>

int main(){
    //system("cls");
    int temp[8];
    char temp_char[8]={'n','m','a','b','c','d','e','f'};
    for(int j=0;j<8;j++){
        printf("la J ahora es %i\n",j);
        printf("\nValor para %c es:",temp_char[j]);
        scanf(" %i ",&temp[j]);//Pido valores al usuario

        printf("el valor de %c es %i\n",temp_char[j], temp[j]);
    //system("cls");
    }
    int n = temp[0],m = temp[1],a = temp[2],b = temp[3],c = temp[4], d = temp[5], e = temp[6], f = temp[7] ;


    //scanf("%i %i %i %i %i %i %i %i",&n,&m, &a, &b, &c, &d, &e,&f);//Pido valores al usuario
    if(n==6){ // Si n es 6
        printf("a: Hola\n"); //Mostrar  hola
    }
    else{
        printf("a: Adios\n");//Si no mostrar adios

    }
    if(n!=7){ //si n no es 7
        printf("b: Hola\n");//mostrar hola
    }
    if(n<=3){//si n es menor o igual a 3
        printf("c:hola\n");//mostrar hola
    }
    if(n>=4){//si n es mayor o igual a 4
        printf("c:adios\n");//mostrar adios
    }
    if(n>0 || n > 10){//si n es menor a 0 o mayor a 10
        printf("d: hola \n");// mostrar hola
        if(n!=0 || n== 6){//si n no es 0 o n es 6
            printf("d: adios\n");//mostrar adios
        }
        else("d: Hasta luego\n");//sino mostrar Hasta luego
    }
    if((n-m)>0 && n*m<10){
        printf("e: hola\n");
        if(n+m != 0 || n% m<=6){
            printf("e: hasta luego\n");
        }
        else{
            printf("e:hasta mañana\n");
        }
    }
    else{
        printf("e:adios\n");
        if(n+m != 0 || n% m<=6){
            printf("e:hasta luego\n");
        }
        else{
            printf("e:hasta mañana\n");
        }
    }
    if(a && b && c){
        if(d || e || f){
            printf("f: Hola\n");
        }
    }
    else{
        printf("f: Adios\n");
    }
    if(a^b || !c){
        if(!(!(a^b) && c)){
            printf("g: Hola\n");
        }
    }
    if(n%m != 0 || n/m <=6){
        if((n<=0||n>=6)&& m==n){
            printf("h: hola\n");
        }
        else{
            printf("h: adios\n");
        }
    }
    else{
        printf("h: hasta luego\n");
    }
    if(n>0){
        printf("i: hola\n");
        if(n>1){
            printf("h: adios\n");
            if(n>2){
                printf("i:hasta luego\n");
            }
        }
    }
}