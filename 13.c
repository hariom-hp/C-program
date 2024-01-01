#include <stdio.h>
#include <conio.h>
int  main()
{
   int a[25], i, large, small, n;
   printf("Enter the size of array(max 25)\n");
   scanf("%d", &n);
   printf("Enter any %d integer array elements\n",n);
   for(i = 0; i < n; i++)
   {
    scanf("%d", &a[i]);
   }
   large = a[0];
   small = a[0];
   for(i = 1; i < n ; i++)
   {
      if(a[i] > large)
      {
    large = a[i];
      }
      if(a[i] < small)
      {
    small = a[i];
      }
   }
   printf("The largest element from the given array is %d \nThe smallest element  from the given array is %d", large, small);
   return 0;
}