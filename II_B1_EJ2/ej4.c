#include <stdio.h>

int main(){
    int n,m,a,b,c,d,e,f ;
    scanf(" %i %i %i %i %i %i %i %i",&n,&m, &a, &b, &c, &d, &e,&f);
    if(n==6){
        printf("a: Hola\n");
    }
    else{
        printf("a: Adios\n");

    }
    if(n!=7){
        printf("b: Hola\n");
    }
    if(n<=3){
        printf("c:hola\n");
    }
    if(n>=4){
        printf("c:adios\n");
    }
    if(n>0 || n > 10){
        printf("d: hola \n");
        if(n!=0 || n== 6){
            printf("d: adios\n");
        }
        else("d: Hasta luego\n");
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