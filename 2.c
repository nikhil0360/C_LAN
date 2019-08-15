#include<stdio.h>

int main()
{
int a , b ;
scanf( "%d %d" , &a , &b ) ;
 
 
if (a>0 && b>0)
{
 	if(a>=b)
 	{
 		printf("%d" , a%b) ;
 	}
 	else if (b>a)
 	{
     		printf("%d" , b%a) ; 
 	}
 
}

else 
{
 	printf("Invalid input") ;
}
 
return 0 ;
}
