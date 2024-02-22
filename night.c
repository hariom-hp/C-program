#include<stdio.h>
int fact(int num){
if(num)
return(num*fact(num-1));
else 
return 1;
}

int main(){
    int num;
printf("enter the number ");
scanf("%d",&num);
printf("final factorial %d is %d\n",num, fact(num));

    return 0;
}