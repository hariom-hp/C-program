#include<stdio.h>
int main(){
    int marks[5];
    for (int i=0; i<=5; i++)
    {
        printf("enter your marks");
        scanf("%d",&marks[i]);
        

        }
        for ( int i=0; i<=5; i++)
        {
            if(marks[i]<35){
            printf("%d\n",i);
        }
        
    }
    
    return 0;

}