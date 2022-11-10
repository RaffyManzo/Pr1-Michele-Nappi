#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int numero, i, flag = 1, somma = 0;
  
  do {
    do{
      printf("Inserisci un intero positivo il programma calcolera' se e' primo:\n");
      scanf("%d", &numero);
      if(numero == - 1){
        flag = 0;
        break;
       }
    }while(numero < 1);
    
    for(i = 1; i <= (int)numero/2; i++) {
      if(numero%i == 0)
        somma += i;
        printf("Somma: %d\n", somma);
    }
    
    if(numero == somma)
      printf("%d e' perfetto\n", numero);
    if(flag == 0)
      break;
  }while(1);
  
  return 0;
}