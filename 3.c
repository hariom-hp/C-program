#include <stdio.h>
#include <math.h>

int main() {
  float radius, height, volume, area;
  printf("Enter the radius of the cylinder: ");
  scanf("%f", &radius);
  printf("Enter the height of the cylinder: ");
  scanf("%f", &height);
  volume = M_PI * radius * radius * height;
  area = 2 * M_PI * radius * (radius + height);
  printf("The volume of the cylinder is: %.3f\n", volume);
  printf("The surface area of the cylinder is: %.3f\n", area);
  return 0;
}
