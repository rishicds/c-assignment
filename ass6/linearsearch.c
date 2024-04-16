#include <stdio.h>

int main(){
    int n,key;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("The current array is:\n");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    printf("\nEnter key to be found: ");
    scanf("%d",&key);
    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("Element %d found at position %d",key,i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("Element not found");

}