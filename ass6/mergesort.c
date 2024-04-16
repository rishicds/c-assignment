#include <stdio.h>

void merge(int arr[],int l,int m,int r){
    int i,j,k;
    int left_length=m-l+1;
    int right_length=r-m;
    int L[left_length],R[right_length];
    for(i=0;i<left_length;i++)
    L[i]=arr[l+i];
    for(i=0;i<right_length;i++)
    R[i]=arr[m+1+i];
    i=j=0;
    k=l;
    while(i<left_length||j<right_length){
        if(j>=right_length||(i<left_length&&L[i]<=R[j])){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
}
void mergesort(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Unsorted array\n");
    for(int i=0;i<size;i++)
    printf(" %d ",a[i]);
    printf("\nSorted array\n");
    mergesort(a,0,size-1);
    for(int i=0;i<size;i++){
        printf(" %d ",a[i]);
    }
}
