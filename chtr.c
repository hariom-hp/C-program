#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rwo  ");
    scanf("%d",&n);
    for (int  i = 1; i <=n; i++)
    {
        int a=1;
        for (int j = 1; j <=i; j++)
        {
int d=a+64;
char ch=(char)d;
printf("%c",ch);
a++;
        }
        printf("\n");
    }
    return  0;
}