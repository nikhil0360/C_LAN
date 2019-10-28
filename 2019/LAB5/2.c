#include <stdio.h>                              //include standard input/output 
#define swap(x,y) long long int t;t=x;x=y;y=t;  //defining macro swap 

void selectionSort(long long a[])               //defining function selection Sort
{
int n = 20,c,count = 0, number_of_swaps =0 ;    //declaring variables

for (int i = 0 ; i<n-1 ; i++)               //iterating 'i' from 1 to n-1 element 
{                                           //index,beacause nth element will be biggest 
  c = i ;                                   //c stores value of smallest element index
    for(int j = i+1 ; j<n ; j++)            //j from 1st to nth element(for checking)
      {  
        count++ ;                           //increating 'count' by 1
        if(a[j]<a[c])                       //changes the index of smallest element in c
          {
            c = j;                  
          }  
      } 

swap(a[i],a[c]) ; //swap 'i'th element with the 'c'th smallest element whose index is c
number_of_swaps++ ;     //increase swap_count by 1

} 

for(int i=0 ; i<n ; i++)
{
printf("%lld ", a[i] ) ;      //printing sorted array using -for- loop
}

printf("\n%d %d", number_of_swaps, count );  // printing no. of swaps and comparision

}


int main()
{
  long long int a[20];
  for(int i = 0 ; i<20 ; i++)
    { 
      scanf("%lld,",&a[i]) ;       //assigning array 'a' using scanf
    }

  selectionSort(a) ;              //calling function selectionSort on array 'a'
}
