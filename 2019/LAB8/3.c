
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void add(float x, float y)
{
	float z=x+y;
	printf("%.4f",z);
}
void subtract(float x, float y)
{
        float z=x-y;
	printf("%.4f",z);
}
void multiply(float x, float y)
{
        float z=x*y;
	printf("%.4f",z);
}
void divide(float x, float y)
{
        float z=x/y;
	printf("%.4f",z);
}
int main()
{
	char op[]={'+','-','*','/'};
	void (*funcpoint[])(float,float)={add,subtract,multiply,divide};
	float a,b;
	char c;
	scanf("%f %f %c",&a,&b,&c);
	for(int i=0;i<5;i++)
	{
		if(op[i]==c)
		{
			funcpoint[i](a,b);
			return 0;
		}
	}
	return 0;
}

