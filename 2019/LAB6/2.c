#include <stdio.h>
#include <stdlib.h> // including standard library for using malloc and free 
#define max 255     // defining 'max' constant to value 255


void scmp(char *str1 , char *str2)  // function definition 
{

int count1=0,count2=0 ;        // declaring variables for length and iteration purpose 
int i=0 , j=0 ;
while(*(str1+i)!='\0')         // using -while- loop for getting length of str1
{
i++ ; count1++ ;
}
while(*(str2+j)!='\0')         // using -while- loop for getting length of str2
{
j++ ; count2++ ;
} 
int count ;

if(count1>count2)               // this block set 'count' to larger of 'count1' and 'count2'
count = count1 ;
else
count = count2;


int n = 0 ;
for(int i=0 ; i<count ; i++)     // using -for- loop to compare character    
{
if(*(str1+i)!=*(str2+i))         // comparing value of character of str1 and str2
  {
	n = 1 ;                  // and if is not equal , n will become 1 
  }
}

printf("%d",n) ;                 // printing final result '0' or '1' 

}

int main(){

char *str1 = (char*)malloc(max*sizeof(char)) ; //   creating a 'str1' pointer and giving space of 4*255
char *str2 = (char*)malloc(max*sizeof(char)) ; //   creating a 'str2' pointer anf giving space of 4*255 

scanf("%s %s",str1 ,str2);     // using -scanf- to get 'str1' and 'str2' 
scmp(str1 , str2) ;            // calling function scmp on 'str1' and 'str2' 
return 0 ;

free(str1) ;
free(str2) ;

}
