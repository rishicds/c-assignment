#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    char string[100];
    printf("Enter a sentence: ");
    fgets(string,sizeof(string),stdin);
    string[strcspn(string, "\n")] = '\0';
    int middle=strlen(string)/2;
    int len=strlen(string);
    int flag=0;
    for(int i=0;i<middle;i++){
        if(string[i]!=string[len-i-1]){
            printf("It is not a palindrome");
            flag=1;
            break;
        }
    }
    if(flag!=1)
    printf("It is a palindrome");
}