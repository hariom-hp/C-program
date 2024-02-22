#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int a,b,sum;
    printf("enter any twoi numbner ");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("your fibnal sum is :%d",sum);
    return 0;
}

