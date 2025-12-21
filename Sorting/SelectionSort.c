#include<stdio.h>
int main(){
int arr[7]={3,555555,6,588885954,7,2,9}; 
for(int i=0;i<7-1;i++){
    int min=arr[i],index=i;
    for(int j=i+1;j<7;j++){
    if(arr[j]<min){ min=arr[j]; index=j; }
    }
int t=arr[i]; arr[i]=arr[index]; arr[index]=t; } 
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
}