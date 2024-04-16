#include <stdio.h>

int main(){
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("Enter element %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("Unsorted array: ");
    for(int i=0;i<size;i++)
    printf(" %d ",a[i]);
    for(int i=0;i<size-1;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(a[min]>a[j]){
            min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;

    }
    printf("\nSorted array: ");
    for(int i=0;i<size;i++)
    printf(" %d ",a[i]);
}