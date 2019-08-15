#include <stdio.h>

int main()
{
  double a , b , c , d , r1, r2 ;
  scanf("%lf %lf %lf" , &a , &b , &c ) ;
  d = pow(b,2) - 4*a*c ;
  if(a!=0)
{
  if(d>=0) 
  {
  r1 = (-b + pow(d,0.5) )/(2*a) ;
  r2 = (-b - pow(d,0.5) )/(2*a) ;
  printf("%.2lf %.2lf",r1,r2) ;
  }
  
  else
  {
  r1 = pow(-d,0.5)/(2*a) ;
  r2 = pow(-d,0.5)/(2*a) ; 
  printf("%.2lf+i%.2lf %.2lf-i%.2lf" , -b/(2*a) , r1 , -b/(2*a) , r2 ) ;
  }
}
  return 0;
}


