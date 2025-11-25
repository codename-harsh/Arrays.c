#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("\nEnter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n\n\n\n");
    int pro = 1;
    for(int i=0;i<=4;i++){
        pro *= arr[i];
    }
    printf("The PRODUCT of elements of array are : %d",pro);
}