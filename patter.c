#include<stdio.h>
int main (){
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    for (int i = 1; i <=3; i++)
    {
        for (int i = 1; i <=n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}