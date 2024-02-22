#include<stdio.h>
int calculatepercantage( int math, int chemistry, int physic);
int main()
{
    int math, chemistry ,physic;
    printf("enter your math marks:");
    scanf("%d",&math);
    printf("enter your chemistry marks:");
    scanf("%d",&chemistry);
    printf("enter your physic marks :");
    scanf("%d",&physic);
    printf(" percantage is :%d",calculatepercantage(math,chemistry,physic));
 return 0;

}
int calculatepercantage (int math, int chemistry,int physic){
    return ( math+chemistry+physic)/3;
}