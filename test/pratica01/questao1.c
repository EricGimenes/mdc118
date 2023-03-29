#include <stdio.h> 

int main(){
  /* entrada */
  float nota_a1 = 0.0f;
  float nota_a2 = 0.0f;
  printf("fala sua nota ai da A1: ");
    scanf("%f", &nota_a1);
  printf("fala sua nota ai da A2: ");
    scanf("%f", &nota_a2);
  
/* processamento */
  
float media_final = (0.4f * nota_a1) + (0.6f * nota_a2);
  
  /* saida */
  printf("tu ta com %.f\n maluco", media_final);
  return 0;
}
