#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    int result;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        result=result+pow(i,i);
    }
    printf("%d",result);
}