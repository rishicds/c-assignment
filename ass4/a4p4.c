#include <stdio.h>

int main(){
    int ch;
    int a,b;
    do{
        printf("Enter a choice\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("Enter two numbers to add");
            scanf("%d %d",&a,&b);
            printf("%d\n",a+b);
            break;
            case 2:
            printf("Enter two numbers to subtract");
            scanf("%d %d",&a,&b);
            printf("%d\n",a-b);
            break;
            case 3:
            printf("Enter two numbers to multiply");
            scanf("%d %d",&a,&b);
            printf("%d\n",a*b);
            break;
            case 4:
            printf("Enter two numbers to divide");
            scanf("%d %d",&a,&b);
            if(b != 0) {
                printf("%d\n",a/b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
            case 5:
            break;

        }
    }while(ch!=5);
}