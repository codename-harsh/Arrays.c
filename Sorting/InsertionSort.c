#include<stdio.h>
int main(){
    int arr[7]={3,555555,6,588885954,7,2,9}; 
    int n=7;
for(int i=1;i<n;i++){
    int key=arr[i]; int j;
    // while loop se bhi kr skte hai : 
    //     while (j >= 0 && arr[j] > key) {
    //         arr[j + 1] = arr[j];
    //         j--;
    //     }
    //     arr[j + 1] = key;  // place key
    // }

    for(j=i-1;j>=0 && arr[j]>key;j--){
    arr[j+1]=arr[j];
    }
    arr[j+1]=key;
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");
return 0;
}
