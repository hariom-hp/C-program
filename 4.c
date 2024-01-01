#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()                      
{
   int i, n, sec;
   float d, u, a;
   printf("Enter the no. of intervals\n");
   scanf("%d", &n);
   for(i = 1; i <= n; i++)
   {
      printf("interval: %d \n", i);
      printf("Enter the time in seconds \n");
      scanf("%d",&sec);
      printf("Enter the velocity \n");
      scanf("%f", &u);
      printf("Enter the acceleration \n");
      scanf("%f", &a);
      d= d + (u * sec + (a * (pow(sec, 2))) / 2);
   }
   printf("Total distance travelled is  %.2f", d);
   getch();
}