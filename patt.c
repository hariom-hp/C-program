#include<stdio.h>
int main(){
    int n,m;
    printf("enter the  row and colum");
    scanf("%d%d",&n,&m);
    for (int i = 1; i <=n; i++)
    {
    for (int i = 1; i <=m; i++)
    {
        printf("*");
    }
    printf("\n");
    }
    return 0;
}