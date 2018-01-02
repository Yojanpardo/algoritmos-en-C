#include <stdio.h>

void main(){
  int a,b,c;
  printf("ingresa el primer numero\n");
  scanf("%i", &a);
  printf("ingresa el segundo numero\n");
  scanf("%i", &b);
  c = a + b;
  printf("el resulta de la suma de los numeros %i + %i es %i\n",a,b,c);
}
