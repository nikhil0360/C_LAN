#include <stdio.h>
#include <stdlib.h>    // including standard library to use -malloc- and -free- 
#define max 255        // defining 'max' to a value of 255
void scat( char *str1 ,char *str2)  // defininig function 'scat' for concat
{

int count1=0,count2=0 ;		// declaring variable for length and iternation purposes 
int i=0 , j=0 ;
while(*(str1+i)!='\0')          // using -while- loop for getting length of 'str1'
{i++ ; count1++ ;}              
while(*(str2+j)!='\0')          // using -while- loop for getting length of 'str2'
{j++ ; count2++ ;}
 
char *str = (char*)malloc(1024*sizeof(char)) ; // creating pointer 'str' which will contain concated string

for(int a=0 ; a<count1 ; a++)     // adding value of 'str1' in 'str' : with appopriate index 
	*(str+a) = *(str1+a) ;

for(int a = 0 ; a<count2 ; a++)   // again adiing value of 'str2' in 'str' : with appropriate index
	*(str+a+count1) = *(str2+a);

for(int a = 0 ; a<count1 + count2 ; a++)  // printing the value of 'str' : character by character 
	printf( "%c" , *(str+a) ) ;

free(str);

}

int main(){

char *str1 = (char*)malloc(max*sizeof(char)) ;  // using -malloc- to create 'str1' pointer and allocating space
char *str2 = (char*)malloc(max*sizeof(char)) ;  // using -malloc- to create 'str2' pointer and allocating space

scanf("%s %s",str1 ,str2);  // taking 'str1' and 'str2' as input using -scanf- 
scat(str1,str2) ;           // calling function -scat- to concat 'str1' and 'str2'
return 0 ;

free(str1) ;
free(str2) ;



}
