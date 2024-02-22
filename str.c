#include<stdio.h>
#include<string.h>
int main(){
    char str [40];
    puts("enter your string");
    scanf("%[^\n]s",str);
    puts("size is :");
   int size=0;
   int i=0;
   while (str[i]!='\0')
   {
      size++;
      i++;

   }
   printf("%d",size);

     return 0;
}