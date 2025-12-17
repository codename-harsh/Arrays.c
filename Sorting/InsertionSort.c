#include<stdio.h>
int main(){
    int arr[7]={3,555555,6,588885954,7,2,9}; 
    int n=7;
for(int i=1;i<=n-1;i++){
    int key=arr[i]; int j;
    for(j=i-1;j>=0;j--){
    if(key<arr[i])
    arr[j+1]=arr[j];
else break;
    }
    arr[j+1]=key;
}
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
