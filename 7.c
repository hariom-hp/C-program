#include<stdio.h>
#include<conio.h>
void main()
{
 int a = 0, b = 1, lengthOfSeries = 0, counter, sum = 0;
 printf("Enter the length of series \n ");
 scanf("%d", &lengthOfSeries);
 printf("Fibonacci series\n");
 printf("%d  %d", a, b);
 for(counter = 2; counter < lengthOfSeries; counter++)
 {
  sum = a + b;
  printf("  %d",sum);
  a = b;
  b = sum;
 }
 getch();
}