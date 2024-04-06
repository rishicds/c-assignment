#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,semiperimeter,area,perimeter;
    printf("Enter the three sides of the triangle.\n ");
    scanf("%d %d %d",&a,&b,&c);
    semiperimeter=(a+b+c)/2;
    area = sqrt(semiperimeter*(semiperimeter-a)*(semiperimeter-b)*(semiperimeter-c));
    perimeter=semiperimeter*2;
    printf("Area of the triangle: %d. \nPerimeter of the triangle: %d.",area,semiperimeter);
    return 0;
}
