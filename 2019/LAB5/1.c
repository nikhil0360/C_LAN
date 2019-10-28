#include <stdio.h>   // including standard input,output file

#define swap(x,y) long long int t;t=x;x=y;y=t;   // defining a macro swap for swaping

void bubble(long long int a[])                   //defining bubble_sort function
{ 
  int number_of_swaps = 0 , count = 0 ;          //declaring variables
  int n = 20 ;                                   //declaring 'n' as 20 (20 elements)
  for(int i = 0 ; i<n ; i++)                     //iterating i from 0 to n-1
    {
      for(int j = 0 ; j<n-1-i ; j++)           //iterating j from 0 to n-1-i 
        {                                      //last element is not required to check 
          count++ ;                            //increasing 'count' by 1 
          if(a[j]>a[j+1])                      //checking adjacent elements array -a-
            {
              swap(a[j],a[j+1]);               //swaping elements if 'a[j]>a[j+1]'  
              number_of_swaps++ ;              //increasing count of swap by 1
            }
        }  

    }

  for(int i = 0 ; i<n ; i++)
    {
      printf("%lld ", a[i] ) ;                 //printing sorted elements from array
    }                                          // 'a' using -for- loop

  printf("\n%d %d",number_of_swaps,count);     //printing number of swaps and comparision
}


int main()
{
  long long int a[20] ;
  for(int i = 0 ; i<20 ; i++)
    {
      scanf("%lld,",&a[i]) ;                   //using -scanf- for intialising array 'a'
    }

 
  bubble(a);                                   //calling function bubble
  return 0 ;                                
}
