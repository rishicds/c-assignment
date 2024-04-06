#include <stdio.h>

int main(){
    char a;
    printf("Enter a alphabet in uppercase or lowercase: ");
    scanf("%c",&a);
    if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        if(a > 96)
            printf("%c", a - 32);
        else
            printf("%c", a + 32);
    } else {
        printf("The entered character is not a letter.");
    }
    return 0;
}