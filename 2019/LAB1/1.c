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
   float area = 3.14*radius*radius;
   printf("%.2f " , area ) ;
  }
 
 return 0 ;
}
