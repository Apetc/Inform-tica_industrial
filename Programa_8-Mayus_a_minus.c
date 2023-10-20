//Programa_8-Mayus_a_minus
//Ejecutar en C

#include <stdio.h>
#include <string.h>

//mayus a minus +32 A=65, a=97, Z=90, z=122
//o usar tolower
int main(){
    char ch[100];                                  //máximo puedes escribir 100 caracteres
    printf("Escribe lo que quieras\n");
    gets(ch);                                      // hace lo mismo que scanf y mete el valor en ch
   for (int i = 0; ch[i]!='\0'; i++) {             //itera hasta llegar a hasta que se encuentre con un \0, que significa que no quedan datos y evitar meterte en la memoria
      if(ch[i] >= 'A' && ch[i] <= 'Z') {           //solo queremos iterar entre los valores en ASCII de las mayúsculas
         ch[i] = ch[i] + 32;
      }
   }
   printf("\nValor en minuscula = %s", ch);
   return 0;
}