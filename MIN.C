#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("\nEnter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n\n\n\n");
    int max = INT_MAX; // SABSE BADA NUMBER 
    for(int i=0;i<=4;i++){
    if(max>arr[i]) max = arr[i];
    }
    printf("The max among the array elements is  : %d",max);
    return 0;
}