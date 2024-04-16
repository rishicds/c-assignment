#include <stdio.h>

int main(){
    int size,temp;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++){
        printf("Enter element %d: ",i);
        scanf("%d",&array[i]);
    }
    printf("Elements in unsorted order: ");
    for(int i=0;i<size;i++)
    printf(" %d ",array[i]);
    //bubble sorting
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("\nElements in sorted order: ");
    for(int i=0;i<size;i++)
    printf(" %d ",array[i]);
}