#include<stdio.h>
#include<math.h>
int main(){
   float side, area,perimeter,diagonal;
    printf("enter the length of side");
    scanf("%f",&side);
    area=side*side;
    perimeter=4*side;
    diagonal=side*sqrt(2);
    printf("area is :%f\n",area);
    printf("perimeter is :%f\n",perimeter);
    printf("diagonal is :%f\n",diagonal);
    return 0;

}