# include<stdio.h>
# include<math.h>
int main()
{
 int i, n ;
 float x, val, sum = 1, t = 1 ;
 printf("Enter the value for x : ") ;
 scanf("%f", &x) ;
 printf("\nEnter the value for n : ") ;
 scanf("%d", &n) ;
 val = x ;
 x = x * 3.14159 / 180 ;
 for(i = 1 ; i < n + 1 ; i++)
 {
  t = t * pow((double) (-1), (double) (2 * i - 1)) *
   x * x / (2 * i * (2 * i - 1)) ;
  sum = sum + t ;
 }
 printf("\nCosine value of sin %f is : %8.4f", val, sum) ;
return 0;
}