#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("%d is maximum and %d is minimum",a,b);
    else if(b>a)
    printf("%d is maximum and %d is minimum",b,a);
    else
    printf("Both are equal");
}