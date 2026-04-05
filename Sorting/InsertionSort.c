#include<stdio.h>
int main(){
    int n; printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ;i<n;i++) scanf("%d",&arr[i]);
for(int i=1;i<n;i++){
    int key=arr[i];
    int j = i-1;
    // while loop se bhi kr skte hai : 
        while (j >= 0 && arr[j] > key) { // Shift elements greater than key to one position ahead
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;  // place key
    }
// printing them ...
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}