#include<stdio.h>
int main(){
    float a,b,c,d,e;
    float total,avg,percentage;
    printf("enter the maks of five suject");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    avg=total/5;
    percentage=(total/500)*100;
    printf("total marks is :%f\n",total);
    printf("average is : %f\n",avg);
    printf("percentage is : %f\n",percentage);
    return 0;
}