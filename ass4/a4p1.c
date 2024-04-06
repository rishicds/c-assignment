#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number to find it's factors: ");
    scanf("%d",&number);
    for(int factor=1;factor<=number;factor++){
        if(number%factor==0)
        printf(" %d ",factor);
    }
}