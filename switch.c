#include <stdio.h>


void main(){
  int opcion;
  int presupuesto;
  int costo;
  int cantidad;
  int costo_total;
  printf("inserte la cantidad de dinero que tiene disponible\n");
  scanf("%d", &presupuesto);


  printf("selecciona que es lo que deseas comprar?\n");
  printf("1: patatas. costo 5\n");
  printf("2: carne. costo 15\n");
  printf("3: salmon. costo 35\n");
  scanf("%d", &opcion);
  printf("cuanto de la opcion %d quieres comprar?\n", opcion);
  scanf("%d",&cantidad);
  switch(opcion){
    case 1:
      costo=5;
      costo_total=costo*cantidad;
      if(costo_total>=presupuesto)
        printf("vas a comprar %i patatas por un costo de %i\n", cantidad, costo_total);
      else
        printf("el dinero no te alcanza");
    break;

    case 2:
      costo=15;
      costo_total=costo*cantidad;
      if(costo_total>=presupuesto)
        printf("vas a comprar %i carne por un costo de %i\n", cantidad, costo_total);
      else
        printf("el dinero no te alcanza");
    break;

    case 3:
      costo=35;
      costo_total=costo*cantidad;
      if(costo_total>=presupuesto)
        printf("vas a comprar %i salmon por un costo de %i\n", cantidad, costo_total);
      else
        printf("el dinero no te alcanza");
    break;

    default:
      printf("No escogiste ningun producto de la lista.\nA trollear a otro lado sapo hijueputa .|.\nAdios\n");
  }
}
