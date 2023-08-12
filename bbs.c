#include<stdio.h>
#include<conio.h>
void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size - 1;step++) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step - 1;i++) {
      
      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {
        
        // swapping occurs if elements
        // are not in the intended order
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
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
    bubbleSort(arr,n);
    printarray(arr,n);

}