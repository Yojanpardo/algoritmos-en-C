#include <stdio.h>

void main(){
  int a, b;
  printf("este programa funciona para decir si un numero es mayor que otro.\n");
  printf("ingresa el primer numero:\n");
  scanf("%i",&a);
  printf("ingresa el segundo numero:\n");
  scanf("%i",&b);
  if(a>b){
    printf("efectivamente %i es mayor que %i\n",a,b );
  }else{
    printf("efectivamente %i es mayor que %i\n",b,a);
  }
}
