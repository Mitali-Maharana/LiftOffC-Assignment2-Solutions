#include<stdio.h>

void rectangle(int m, int n)
{
	int i, j;
	for (i=1; i<=m; i++)
	{
		for (j=1; j<=n; j++)
		{
			if (i==1 || i==m || j==1 || j==n)
			   printf("*");
			else
			   printf(" "); 
		}
		printf("\n");
	}
}
int main()
{
    int rows = 5, columns =5;
    rectangle(rows, columns);
    return 0;
}
