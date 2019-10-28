
#include <stdio.h>
#include <string.h>


int main()
{   int b = 100 , n1 , n2 , l1 , count=0;
    char a1[b] , s[b];

    scanf("%s %d" , a1, &n1) ;
    l1 = strlen(a1) ;
    n2 = l1 - n1 + 1 ;
    char a2[100][100] ;


    for(int i = 0 ; i<n2 ; i++)
    {
        for(int j = 0 ; j<n1 ; j++)
        
        {

            a2[i][j] = a1[i+j] ;

        }
   // printf("\n%s" , a2[i]) ;
    }
    
    
for(int m = 0 ; m<n2 ; m++)
{
    for(int k = m+1 ; k<n2 ; k++)
    {
        if(strcmp(a2[m],a2[k])==0)
            {count++ ;
            break ;}
        
    }

    
}
  
  
  
  
  
int final = (n2-count) ;

printf("%d" ,final ) ;
//printf("\n%d", n2) ;
//printf("\n%d" ,count) ;


return 0 ;
}
