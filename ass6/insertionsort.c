#include <stdio.h>

int main(){
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("Enter element no %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Unsorted array: \n");
    for(int i=0;i<size;i++)
    printf(" %d ",a[i]);
    for (int i=1;i<size;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0&&a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("\nSorted array: \n");
    for(int i=0;i<size;i++)
    printf(" %d ",a[i]);
}