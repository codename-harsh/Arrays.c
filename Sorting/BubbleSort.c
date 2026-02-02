#include<stdio.h>
int main(){
    int arr[7]={4,3,5,6,7,8,9}; 
    int n=7;
    // ascending order hai //
for(int i=0;i<n-1;i++){
for(int j=0;j<=n-1-i;j++){
 if(arr[j]>arr[j+1]){int  temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
} } }
puts("The sorted elements are as follows :");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]); }
    return 0;
}
