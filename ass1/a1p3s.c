#include <stdio.h>
int main(){
    int l,b,area,perimeter;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("The area of the rectangle is %d, and the perimenter is %d.",area,perimeter);
    return 0;
}