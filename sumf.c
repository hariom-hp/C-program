#include<stdio.h>
int add(int a, int b)
{
return a+b;

}
int main(){
    int a,b;
    printf("enter the number ");
    scanf("%d%d",&a,&b);
    int sum=add(a,b);
    printf("%d",sum);
    return 0;
}