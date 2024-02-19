#include <stdio.h>
#define COLOR1 27
#define COLOR2 34
#define COLOR3 89

int main(){
    int color;
    float a,b,c;//reactivos
    char usuario;
    int password;
    int m1,m2,m3;//motores encendido/apagado
    float polarization_time;
    char usuario1='1',usuario2='2',usuario3='3';
    int password1= 222222,password2=101010 ,password3=333333 ;
    int aux;
    int aux1;

    printf("Introdzca las credenciales de inicio de sesion\n");
    scanf("%c %i",&usuario,&password);
    if(usuario == usuario1 && password == password1 || usuario == usuario2 && password == password2 || usuario == usuario3 && password == password3){
        printf("Bienvenido  a Aureltino\n");
        do{
            printf("Elija su color del catalogo\n");
            scanf("%i",&color);
                            switch (color)
                {
                case COLOR1:
                    a= 3;
                    b= 7;
                    c= 0;
                    polarization_time= 18.4;
                    m1= 1;
                    m2= 0;
                    m3= 0;
                    break;
                case COLOR2:
                    a= 4;
                    b= 3;
                    c= b*b;
                    polarization_time= 23.4;
                    m1= 1;
                    m2= 1;
                    m3= 0;
                    break;
                case COLOR3:
                    a= 1.2;
                    b= 2.5;
                    aux= (a-b)*2;
                    aux1=a/5 +7;
                    c= aux/aux1 +b;
                    polarization_time= 57.4;
                    m1= 1;
                    m2= 1;
                    m3= 1;
                    break;
                
                default:
                    printf("Introduzca un color valido del catalogo\n");
                    break;
                }
        }while(color != COLOR1 && color != COLOR2 && color != COLOR3);
        char aux_char;
        printf("¿Quiere modificar el tiempo de polimerzacion?Y'\\'N\n");
        scanf(" %c",&aux_char);
        if(aux_char=='Y'||aux_char=='y'){
            printf("Introduzca su nuevo valor en segundos:\n");
            scanf("%f",&polarization_time);
        }
        printf("Los parametros de configuracion del sistema son:\n");
        printf("Color de tabla en fabricacion: %i\n",color);
        printf("Cantidad de reactivo A[kg]: %0.1f\n",a);
        printf("Cantidad de reactivo B[kg]: %0.1f\n",b);
        printf("Cantidad de reactivo C[kg]: %0.1f\n",c);
        printf("Estado de motor 1(mezcladora): %s\n",m1? "true" : "false");
        printf("Estado de motor 2(bomba 1): %s\n",m2? "true" : "false");
        printf("Estado de motor 3(bomba 2): %s\n",m3? "true" : "false");
        printf("Tiempo de polimerizacion[s]: %0.1f\n",polarization_time);
        return 0;
    }else{
        printf("No pasaras, irse de aquis\n");
    }    
    return 0;
}