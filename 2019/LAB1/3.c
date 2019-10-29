#include <stdio.h>
int main()
{
	int n, i, j;
	printf ("Number of rows: ");
	scanf ("%d", &n);
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=n-i; j++)
		{
			printf(" ");
		}
		if (i==1)
			printf ("*");
		else if (1<i && i<n)
		{
			for (j=1; j<=2*i-1; j++)
			{
				if (j==1 || j== 2*i-1)
				{
					printf ("*");
				}
				else
				{
					printf (" ");
				}
			}
		}
		else if (i==n)
		{
			for (j=1; j<=2*n-1; j++)
				printf ("*");
		}
		printf ("\n");
	}
	return 0;
}
