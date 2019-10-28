#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
int main()
{
    int x1 , y1  , x2  , y2 , r1 , r2 , d2 , d3 , a1 , b1 , a2 , b2 , c1;
    float d1 ;
 // d1 is distance between center 
 // d2 is sum of radius : r1 + r2 
 // d3 is difference of radius : r1 - r2 
 
 scanf("%d %d %d %d %d %d", &x1 , &y1 , &x2 , &y2 , &r1 , &r2) ;
 
 
 if(r1>=0 && r2>=0)
{
    
 d2 = r1 + r2 ;
 d3 = abs(r1 - r2) ; // as distance cannot be negative 
 a1 = x1 - x2 ;
 b1 = y1 - y2 ;
 a2 = pow(a1,2) ;
 b2 = pow(b1,2) ;
 c1 = a2 + b2 ;
 d1 = pow(c1, 0.5) ;
 
// condition is d3 <= d1 <= d2 .
//if this is true than the circle intersect according to the given definition .

    if(((d3<d1) && (d1<d2))||(d2==d1)||(d3==d1)) 
    {
	if(x1==x2 && y1==y2 && r1!=r2 )
	{printf("NO");}
	else
        {printf("YES");}
    }

    else
    {
        printf("NO") ;
    }
}

else
{
 printf("Invalid input") ;
}

    return 0;
}
