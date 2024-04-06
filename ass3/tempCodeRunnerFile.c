#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter marks of three numbers: ");
    scanf("%d %d %d",a,b,c);
    int avg=a+b+c/3.0;
    if(avg>=80)
    printf("A");
    else if(avg<80 && avg>60)
    printf("B");
    else if(avg>40 && avg<60)
    printf("C");
    else if(avg<40 && avg>=0)
    printf("F");
    else
    printf("INVALID");

}