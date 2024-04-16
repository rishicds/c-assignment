#include <stdio.h>

int main(){
    int target,size,temp;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++){
        printf("Enter element %d: ",i);
        scanf("%d",&array[i]);
    }
    printf("Array in unsorted order");
    for(int i=0;i<size;i++){
        printf(" %d ",array[i]);
    }
    //bubble sort
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("Array in sorted order: ");
    for(int i=0;i<size;i++)
    printf(" %d ",array[i]);

    printf("Enter value to search: ");
    scanf("%d",&target);

    //binary search

    int low = 0, high = size - 1, middle, value;
    int found = 0;

    while(low <= high){
        middle = low + (high - low) / 2;
        value = array[middle];
        if(value > target){
            high = middle - 1;
        }
        else if(value < target){
            low = middle + 1;
        }
        else {
            printf("Element found\n");
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element not found\n");
    }
}