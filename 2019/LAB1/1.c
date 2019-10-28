#include<stdio.h>

int main()
{
float radius;
scanf("%f", &radius) ;
  if(radius<0)
  {
      printf("Invalid input") ; 
  }
  
  else
  {
   float area = 3.141592653589*radius*radius;
   printf("%f " , area) ;
  }
 
 return 0 ;
}
