#include <stdio.h>

void main(){
  int a=1,b=2,c=3,x,y,w;
  double z;
  x=a+b;
  y=b-c;
  z=a/c;
  w=b*a;
  int d = !(x<y);
  printf("el resultado de la operacion 1 es: %i\n", x);
  printf("el resultado de la operacion 2 es: %i\n", y);
  printf("el resultado de la operacion 3 es: %f\n", z);
  printf("el resultado de la operacion 4 es: %i\n", w);
  printf("el resultado de la operacion 5 es: %i\n", d);
}
