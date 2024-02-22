#include<stdio.h>
#include<math.h>
float squareArea( float side);
float circleArea( float rad);
float rectangleArea( float a, float b);
int main ()
{
    float side,rad,a,b;
    
    printf("enter the square:");
    scanf("%f",&side);
    printf("enter the circle:");
    scanf("%f",&rad);
    printf("enter the rectangle:");
    scanf("%f %f",&a,&b);
   float squareResult =squareArea(side);
   float circleResult=circleArea(rad);
   float rectangleResult=rectangleArea(a,b);
   printf("final side is :%.2f\n",squareResult);
   printf("final corcle is %.2f\n:",circleResult);
   printf("final rectangle is :%.2f\n",rectangleResult);


    return 0;

}
float squareArea( float side ){
    return side*side;

}
float circleArea( float rad){
    return 3.14*rad*rad;
}
float rectangleArea( float a, float b){
    return a*b;
}

