 #include<stdio.h>
 int sum(int a, int b);
 int main (){
int a,b,sum;
printf("enter the number ");
scanf("%d%d",&a,&b);
sum=(a+b);
printf("final sum is :%d",sum);
    return 0;
 }
 int sum(int a, int b){
    return a+b;
 }