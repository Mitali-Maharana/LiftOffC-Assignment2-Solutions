#include<stdio.h>
 
int main()
{
 int Size, i, a[10];
 int Even= 0, Odd = 0;
 
 printf("\n Please Enter the Size of an Array : ");
 scanf("%d", &Size);
 
 printf("\nPlease Enter the Array Elements\n");
 for(i = 0; i < Size; i++)
 {
      scanf("%d", &a[i]);
 }
  
 for(i = 0; i < Size; i ++)
 {
   if(a[i] % 2 == 0)
   {
 	Even = Even + a[i];
   }
   else
   {
 	Odd= Odd + a[i];
   }
 }
  
 printf("\n The Sum of Even Numbers in this Array = %d ", Even);
 printf("\n The Sum of Odd Numbers in this Array = %d ", Odd);
 
 return 0;
}
