
#include <stdio.h>


int main(){
   int number;

    printf("number \n");
    scanf("%i" , &number);
    
    
    
    for(int i = 0; i<number; i++)
    {
      for(int d = 0; d<=i; d++)
      {
        printf("*");
      }
    
    printf("\n");

    }

  return 0;
}