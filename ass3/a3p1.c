#include <stdio.h>
int main(){
    int month;
    printf("Enter month number");
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
        printf("31 days");
    }
    else if(month==2){
        printf("28/29 days");
    }
    else
    printf("30 days");
}