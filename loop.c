#include<stdio.h>
int main(){
    int n;
    printf("enter the nuber");
    scanf("%d",&n);
    int a=3;
    for (int i = 1;  i<=n; i++)
    { 
       
printf("%d\n",a);
            a=a*4;            
    }
    return 0;
}