#include <stdio.h>

int main()
{
    int n;
    printf("Enter size of pattern: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
}