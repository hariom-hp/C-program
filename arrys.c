#include<stdio.h>
int main (){
   int num[10],i,pos,neg;
   pos=0;
   neg=0;
   for (int i = 0; i<=10; i++)
   {
    printf("enter the element =");
    scanf("%d",&num[i]);
    }
   for (int i = 0; i<=10; i++)
   {
    if (num[i]>0)
    {
        pos=pos+1;
    }
    else
    neg=neg+1;
   }
   printf("positive=%d, negative is=%d",pos,neg);
    return 0;
}