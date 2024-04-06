#include <stdio.h>
int main(){
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d",&radius);
    float area=3.142*radius*radius;
    printf("The area of the circle is: %.2f",area);
}