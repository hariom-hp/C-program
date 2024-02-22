#include<stdio.h>
int main(){
    int a,b;
    printf("enter the numbeer");
    scanf("%d",&a);
    printf("enter the number  of b");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the value of a is b: %d\n",a);
    printf("the value of b is a: %d",b);
    return 0;
}