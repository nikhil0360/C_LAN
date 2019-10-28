#include<stdio.h>
  
int main(){

int a[10], count = 0 ;      // declaring a blank array 'a' and a counter 'count'

for(int i = 0 ; i<10 ; i++)
  {
    scanf("%d,",&a[i]) ;    // taking elements in array 'a' using -for- loop
  }  

int n  ;                    // declaring 'n' 
scanf("%d",&n);             // taking 'n' , which is to be searched ; using scanf 

for(int i = 0 ; i<10 ; i++) // using -for- loop to check and process
  {
    if(n!=a[i])             // if 'n' and element in 'a' does not match
    count++;                // increase count by 1

    else                    // else if they are equal , i.e if they matched
      {
        printf("%d %d" ,1,i+1);     // print 1 and the 'number of comparision made'
        break ;                     // and break from the loop
      }

  } 

if(count==10)               // if count=10 , it means no elements were matched  
  { 
    printf("0 10");         // hence print "0" and "10" 
  } 

return 0 ;

}

