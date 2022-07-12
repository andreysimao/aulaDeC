
#include <stdio.h>

int main(){

  int vetor_x_instant = 0;
  int vetor_y_instant = 0;
  int tempo = 10;
  int i = 0;
  int max_x = 0;
  int forca_total = 0;
  int angulo = 0;
  int vetor_x = 0;
  int vetor_y = 0;
  int gravidade = -10;



  printf("qual a sua forca vetorial total? \n");
   scanf("%i" , &forca_total);

  printf("qual o angulo de lancamento? \n");
   scanf("%i" , &angulo);
vetor_x = (angulo * (forca_total/2))/45;
vetor_y = (forca_total - vetor_x);


while (1){


  vetor_x_instant += (vetor_x + i*gravidade);
  vetor_y_instant += (vetor_y);
  i++;
  if(vetor_x_instant > max_x){
    max_x = vetor_x_instant;
  }
  if(vetor_x_instant == 0){
    break;
  }


}



printf("%i altura maxima \n", max_x );
printf("%i forca para o lado \n", vetor_y_instant);
printf("%i altura final \n", vetor_x_instant);
printf("apertar ENTER para fechar ");
getchar();
return 0;
}



