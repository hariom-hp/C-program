#include <stdio.h>
#include <math.h>
int main() {
    
    float length, breadth, a, p, d;
    printf("Enter the length of rectangle: ");
    scanf("%f", & length);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", & breadth);
    a = length * breadth;
    p = 2 * (length + breadth);
    d = sqrt(length * length + breadth * breadth);
    printf("Area: %0.3f\n", a);
    printf("Perimeter: %0.3f\n", p);
    printf("Diagonal: %0.3f\n", d);
return 0;
}