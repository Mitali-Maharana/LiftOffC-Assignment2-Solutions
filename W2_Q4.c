#include<stdio.h>

int main()
{
	int i, n;
	int t1=0, t2=1;
	int t=t1+t2;
	printf("enter the no. of terms: ");
	scanf("%d", &n);
	printf("Fibonacci Series: %d, %d, ", t1, t2);
	
	
    for (i = 3; i <= n; ++i) 
	{
    printf("%d, ", t);
    t1 = t2;
    t2 = t;
    t = t1 + t2;
  }

  return 0;
}  
	

