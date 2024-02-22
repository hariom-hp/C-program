#include<stdio.h>
int main(){
    float price [3];
    printf("enter the 3 price :");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    printf("total price 1 is :%f\n",price[0]+(0.18*price[0]));
    printf("total price 2 is :%f\n",price[1]+(0.18*price[1]));
printf("tatal price 3 is :%f\n",price[2]+(0.18*price[2]));
}