#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int a,b;
	char ch;//character ch
	if(argc!=4)//if argc not equal not 4 then return 0
	{
		return 0;
	}
	a=atoi(argv[1]);//converting string to integer
	b=atoi(argv[2]);//converting string to integer
	ch=(argv[3])[0];//converting string to character
	int c;
	switch(ch)
	{
	         case '+':c=a+b;
		          printf("%d",c);//if the case is addition then print c=a+b
			  break;
	         case '*':c=a*b;
		          printf("%d",c);//if the case is multiplication then print c=a*b
			  break;
	         case '-':c=a-b;
		          printf("%d",c);//if the case is subtrasction then print c=a-b
			  break;
	         case '/':c=a/b;
		          printf("%d",c);//if the case is division then print c=a/b
			  break;
	         default :printf("TRY AGAIN INVALID INPUT");//if it doesnt matches any char then print default statement 
	}
	return 0;
}
