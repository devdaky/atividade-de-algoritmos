#include <stdio.h>
#include <stdlib.h>

 int main (){
  float a, b, c, media, maior, menor;
  
  printf("digite tres valores:");
  scanf("%f %f %f", &a, &b, &c);
  
  media= (a + b + c) /3 ;
  
  maior = a;
  if (b > maior) maior = b;
  if (c > maior) maior = c;
  
  menor = a;
  	if (b< menor) menor = b;
  	if (c < menor) menor = c;
  	
  	printf("maior: %.2f\n", maior);
  	printf("menor: %.2f\n", menor);
  	printf("media: %.2f\n", media);
  			
   system ("pause");
 
 return 0;
}

