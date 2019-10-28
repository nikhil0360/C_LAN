#include <stdio.h>
#include <string.h>


int main()
{   int b = 10 ;
    char s[b] ;
    char a1[b] ;
    
    
    
   // char a3[10][10] ;
    
    int n1,n2,l1 ;
    
    scanf("%s %d" , a1, &n1) ;
   
    l1 = strlen(a1) ;
    
    //printf("%d" , l1) ; 
    
    n2 = l1 - n1 + 1 ;
    char a2[n2][n1] ;
    for(int i = 0 ; i<n2 ; i++)
    {
        for(int j = 0 ; j<n1 ; j++)
        {
            a2[i][j] = a1[j+i] ;
            
        }
    }
    
    
       
 
 printf("%s", a2[0]);
 /*
for(int m =0 ; m<n2 ; m++)
 {
     printf("%s \n" , a2[m]);
 }*/

/*for(int p = 0 ; p<n2 ; p++)
{
	s = a2[p]
	
	for(int q = 0 ; q<n2 ; q++ ) 
		{
			if(strcmp((s,a2[q],n1)==1
