#include <stdio.h>
#include <stdlib.h>          // including standard library - for malloc and free
int main()
{

int n ;                      
scanf("%d" , &n ) ;          // input 'n' using -scanf- , 'n' is number of numbers to be stored
int *ptr = (int*)malloc(n*sizeof(int)) ;    // declaring pointer ptr of size 'n'*4 (where 4 is size of int)
for(int i=0 ; i<n ; i++)      
{
scanf("%d", ptr+i);                         // using -for- loop for initialised pointer 
}

for(int i = 0 ; i<n ; i++)
{
printf("%d " , *(ptr+i));                   // using -for- loop to print the values in pointer 'ptr'
}

free(ptr) ;                                 // freeing the allocated space using -free- 

return 0 ;

}
