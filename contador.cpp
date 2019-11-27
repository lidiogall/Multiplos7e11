#include <stdio.h>
#include <conio.h>

int main(void)
{
  int contador;
  
  for(contador = 1; contador <= 150; contador++)
  {
   	if(((contador %7 ) == 0) && ((contador %11 ) == 0)){
	printf("\nMultiplo de 7 e 11");
	}
	else if((contador %7 ) == 0){
	printf("\nMultiplo de 7");
	}
	else if((contador %11 ) == 0){
	printf("\nMultiplo de 11");
	}
	else
    printf("\n%d ", contador);
  }
  
  getch();
  return(0);
}

