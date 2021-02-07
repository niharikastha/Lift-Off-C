#include <stdio.h>
int main() 
{
  int p,c,b,m,comp;
  float per;

  printf("Enter marks scored in physics: ");
  scanf("%d",&p);
  printf("\nEnter marks scored in chemistry : ");
  scanf("%d",&c);
  printf("\nEnter marks scored in biology : ");
  scanf("%d",&b);
  printf("\nEnter marks scored in mathematics : ");
  scanf("%d",&m);
  printf("\nEnter marks scored in computer : ");
  scanf("%d",&comp);

  per = (p+c+b+m+comp)/5;

  printf("\npercentage : %f",per);

  if(per>=90 && per<=100)
  {
    printf("Your grade is A");
  }
  else if(per>=80 && per<90)
  {
    printf("Your grade is B");
  }
  else if(per>=70 && per<80)
  {
    printf("Your grade is C");
  }
  else if(per>=60 && per<70)
  {
    printf("Your grade is D");
  }
  else if(per>=40 && per<60)
  {
    printf("Your grade is E");
  }
  else
  {
    printf("Your grade is F");
  }

  return 0;
}
