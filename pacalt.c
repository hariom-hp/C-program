#include<stdio.h>
int factorial(int x){
    int fact=1;
    for (int  i = 1; i <=x; i++)
    {
       fact=fact*i;
    }
    return fact;
}
int combination(int n ,int r){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
    }
    int main(){
        int n;
        printf("enter tyhe number :");
        scanf("%d",&n);
        for (int i = 0; i <=n; i++)
        {
           // int i;
            for (int k =1; k <=n-i+1; k++)
            {
                printf(" ");
                
            }
            
        for (int j = 0; j <=i; j++)
        {
            int icj=combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
        }
        return  0;
    }