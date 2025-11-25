#include<stdio.h>
int main(){
    int arr[8] = {1,1,1,1,1,1,1,1};
    int sumeven = 0,sumodd=0;
    for(int i=0;i<=7;i++){
        if(i%2==0) sumodd +=arr[i];
        else sumeven +=arr[i];
    }
    printf("%d -- %d",sumeven,sumodd);
    return 0;

    }