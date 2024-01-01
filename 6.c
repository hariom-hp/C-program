#include<stdio.h>
#include<conio.h>
#include<math.h>
void main ()
{
 int number = 0, digit = 0, sumOfDigits = 0;
 printf("Enter any number\n ");
 scanf("%d", &number);
 while (number != 0)
 {
  digit = number % 10;
  sumOfDigits = sumOfDigits + digit;
  number = number / 10;
 }
 printf ("Sum of individual digits of a given number is %d", sumOfDigits);
 getch();
}