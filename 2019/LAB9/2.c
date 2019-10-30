#include<stdio.h>
struct operation//declaring structure
{
	float r,i;
};
int main()
{
	struct operation c1;
        struct operation c2;
        scanf("%f %f\n",&c1.r,&c1.i);//taking input of 1st complex number of real and imaginary parts
	scanf("%f %f",&c2.r,&c2.i);//taking input of 2nd complex number of real and imaginary parts
        printf("%.2f + %.2fi\n",c1.r+c2.r,c1.i+c2.i);//addition of two complex numbers
	printf("%.2f + %.2fi\n",c1.r-c2.r,c1.i-c2.i);//subtraction of two complex numbers
	printf("%.2f + %.2fi",(c1.r)*(c2.r)-(c1.i)*(c2.i),(c1.i)*(c2.r)+(c1.r)*(c2.i));//multiplication of two complex numbers
	return 0;
}
