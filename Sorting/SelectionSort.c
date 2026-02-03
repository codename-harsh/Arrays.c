#include<stdio.h>
int main(){
    int n; puts("Enter the number of integers : ");
    scanf("%d",&n);
    int arr[n],min,temp;
for(int i=0;i<n;i++) scanf("%d",&arr[i]);
// Now starting the main shit //
for(int i=0;i<n-1;i++) {
    min = i;
    for(int j=i+1;j<n;j++) {
        if(arr[j]<arr[min]) min = j;
    }
    temp = arr[i]; 
    arr[i]=arr[min];
    arr[min]=temp;
}
puts("Sorted array :");
for(int i=0;i<n;i++) printf("%d ",arr[i]);
return 0;
}