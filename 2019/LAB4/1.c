#include <stdio.h>

int main()
{

int a[10] ;                    // declaring a array 'a' of size '10'

for(int i = 0 ; i<10 ; i++)    // adding elements in array 'a' using for loop
 {
   scanf("%d,",&a[i]) ;           // to enter elements separated by ',' ; use "%d," 
 }

for(int i = 9 ; i>=0 ; i--)
 { 
   printf("%d " , a[i]);          // using loop to print elements in reverse order
 }

return 0 ;


}
