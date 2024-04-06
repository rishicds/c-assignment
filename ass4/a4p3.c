#include <stdio.h>

int main(){
    int n, i;
    printf("Enter a number to check for prime: ");
    scanf("%d",&n);
    for(i = 2; i < n; i++){
        if(n % i == 0){
            printf("It is not a prime number\n");
            break;
        }
    }
    if(i == n){
        printf("It is a prime number\n");
    }
    return 0;
}