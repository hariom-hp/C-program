#include<stdio.h>
int main (){
    int n;
    printf("entter the no of row ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        int a=1;
         for (int j = 1; j <=n; j++)
         {
            int d=a+64;
            char ch=(char)d;
            a++;
            printf("%c",ch);
         }
         printf("\n");
         
    
}
return  0;
    
}