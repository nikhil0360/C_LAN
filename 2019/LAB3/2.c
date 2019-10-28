#include <stdio.h>
#include <string.h> // for using string functions


int main()
{   
    
    int b = 100 , n1 , n2 , l1 , count=0;
// n1 is length of substring
// n2 is the no. of substrings 
// l1 is the length of the word enter
    char a1[b] , s[b] , a2[b][b] ;  // declaration of arrays 
// a1 is the original string 
// a2 is the array which contains substrings
// s is used for checking for duplicity

    scanf("%s %d" , a1, &n1) ;
    l1 = strlen(a1) ;
    
    if(l1>=n1)
    {
    n2 = l1 - n1 + 1 ;
    


    for(int i = 0 ; i<n2 ; i++)
    {
        for(int j = 0 ; j<n1 ; j++)
        {
            a2[i][j] = a1[i+j] ;
        }
    }
    
    
    for(int m = 0 ; m<n2 ; m++)
    {
        for(int k = m+1 ; k<n2 ; k++)
        {
            if(strcmp(a2[m],a2[k])==0)
            {   
            count++ ;
            break ;
            }
        }
    }
  
  
  
  
  
int final = (n2-count) ; // final output
printf("%d" ,final ) ; 
return 0 ;

}

else
printf("%d" , 0) ;

}