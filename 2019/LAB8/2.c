#include <stdio.h>
#include <stdlib.h>
char itob(int n, char *s, int b)
{
	int count=0;
	int i;
	while (n>0)
	{
		if(n%b<10)
		{
			*(s+i)=  48+(n%b);
		}
		else
		{
			*(s+i)= 87+(n%b);
		}
		n= n/b;
		count++;
		i++;
	}
	//printf ("%d\n", count);
	for (i=count-1; i>=0; i--)
	{
		printf ("%c", *(s+i));
	}
}
int main()
{
	int n, b;
	char *s;
	s= (char*)malloc(256*sizeof(char));
	scanf ("%d %d", &n, &b);
	itob(n,s,b);
}
