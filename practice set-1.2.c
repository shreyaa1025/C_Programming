//2. calculate the area of a circle and also modify the same program to calculate the volume of the cylinder given its radius and height
#include <stdio.h>

int main() {
    int r = 6;
    int h = 10;
    printf("the area of a circle with radius is  %d is %f\n",r, 3.14*r*r);
    printf("the volume of a cylinder with radius is %d and height %d is %f",r,h,3.14*r*r*h);
    return 0;
}
