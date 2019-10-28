#include<stdio.h>
  
int main(){

int n[10], input ;    // declaring array 'n' and input number to be searched as 'input'

for(int i = 0 ; i<10 ; i++)   // using -for- loop for iterating elements in array 'n'
  {
    scanf("%d,",&n[i]) ;       
  }

scanf("%d",&input) ;          // taking 'input' from scanf

int a = 0 , b = 9 , c ;       // a--> start element , b--> end element , c = (a+b)/2 --> mid

for(int j = 1 ; j<=4 ; j++)   // using for loop to search 'input' in array 'n'
  {
    c = (a+b)/2 ;             //middle element
    if(input<n[c])            //if 'input' is lesser than middle element(given using index of c)
    b = c - 1 ;                   // change the end element 

    else if(input>n[c])       //similarly if it is greater
    a = c + 1 ;                   // change the first element
   
    else if(input==n[c])      //if it is equal 
      {
        printf("%d %d", 1 , j ) ;  // print '1' and the 'number of comparision
        break ;                    //break loop 
      }
  }

if(a>b)                       // if the first element index , i.e 'a' is greater than 'b'
{                             // it means no element in 'n' is equal to 'input'
printf("%d %d", 0 , 4) ;         // therefore print "0" and 'number of comparision
}

return 0 ;

}

