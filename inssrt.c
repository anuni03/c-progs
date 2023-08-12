#include<stdio.h>
#include<conio.h>
void insertionsort(int arr[],int n){
    int i,ele,j;
    for(i=1;i<n;i++){
        ele=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>ele){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=ele;
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void main(){
    int n;
    printf("Enter the size of array.\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertionsort(arr,n);
    printarray(arr,n);

}