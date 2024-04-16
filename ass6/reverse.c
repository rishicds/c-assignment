#include <stdio.h>

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("Enter element no %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("Normal array: \n");
    for(int i=0;i<size;i++){
        printf(" %d ",a[i]);
    }
    // Reverse the array
    for(int i=0; i<size/2; i++){
        int temp = a[i];
        a[i] = a[size-i-1];
        a[size-i-1] = temp;
    }
    printf("\nReversed array: \n");
    for(int i=0;i<size;i++){
        printf(" %d ",a[i]);
    }
    return 0;
}