#include <stdio.h>
#include <string.h>
#include <conio.h>
void main()
{
   char a[20];
   int i, carry, l;
   printf("Enter the binary number \n");
   scanf("%s", &a);
   l = strlen(a);
   for(i = 0; i < l; i++)
   {
       if(a[i] == '0')
       {
      a[i] = '1';
       }
       else
       {
      a[i] = '0';
       }
   }
   printf("The 1's compliment of the binary number is %s \n", a);
   i = strlen(a) - 1;
   while(i >= 0)
   {
      if(a[i] == '0')
      {
     a[i] = '1';
     carry = 0;
     break;
      }
      else
      {
     a[i] = '0';
     carry = 1;
     i = i - 1;
      }
  }
  printf("The 2's compliment of the binary number is ");
  if(carry == 1)
  {
    printf("1");
  }
  printf("%s", a);
  getch();
}