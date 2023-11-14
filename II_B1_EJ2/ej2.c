#include <stdio.h>
#include <math.h>

int main (){ //el ejercicio se hacia sin cambiar los numeros
    double a,b,c,d,e,f,g,h,i;
    int usu,clave;
    int usu1 = 1234;
    int clave1 = 999;
    int usu2 = 4343;
    int clave2 = 888;
    scanf("%i %i",&usu, &clave);
    a = 1 + ((2/3.0)*4)-((5-6)/7.0);
    printf("a: %lf\n",a);
    b = 1 + ((2.0-3)/(4*5.0))-((6/7.0)/(8-9));
    printf("b: %lf\n",b);
    c = (1/((2-3.0)/(4.0*5)))*((6/7.0)/(8.0-9));
    printf("c: %lf\n",c);
    d = sqrt(pow(5.0,9)-pow(4.0,3));
    printf("d: %lf\n",d);
    double aux1= pow(7,2) - pow(2,8);
    if(aux1<0){
        aux1= aux1 *(-1);
        e = (1-2.0)/(sqrt(aux1));
        printf("e: %lf\n",e);
    }
    else{
        e = (1-2.0)/(sqrt(aux1));
        printf("e: %lf\n",e);
    }
    double aux2= pow(3,2) - pow(3,8);
    if(aux2<0){
        aux2 = aux2*-1;
        f = (5 + (a/3.0))/((log10(5.0))/(sqrt(aux2)));
        printf("f: %lf\n",f);
    }
    else{
        f = (5 + (a/3.0))/((log10(5.0))/(sqrt(aux2)));
         printf("f: %lf\n",f);
    }
    if (a<0){
        if(a>=10){
            printf("g: A es mayor o igual a 10\n");
        }
        else{
        printf("g: A es menor o igual a 10\n ");      
        }
    }
/* tambien se puede hacer
    if (a>=10&&b<0){
        printf("g:A es mayor o igual a 10 \n")
    }
    else{
    printf("g: A es menor o igual a 10\n ");      
    }

*/
    if (a || b ||c){
        printf("h:a o b o c estan activos\n");
    }
    

    
    if(usu1==usu||clave1==clave){
        printf("i: usuario1\n");
    }
    else{
            if(usu2==usu||clave2==clave){
        printf("i: usuario2\n");
    }
    else{
        printf("acceso denegado\n");
    }
    
}
}