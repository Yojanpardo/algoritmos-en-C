#include <stdio.h>

void main(){
  int a;
  float b;
  char c;
  printf("ingresa un caracter: ");
  scanf("%c", &c);
  printf("ingresa un valor entero: ");
  scanf("%i", &a);
  printf("ingresa un valor decimal: ");
  scanf("%f", &b);
  printf("el valor entero fue: %i\n", a);
  printf("el valor decimal fue: %f\n", b);
  printf("el valor caracter fue: %c\n", c);

}
