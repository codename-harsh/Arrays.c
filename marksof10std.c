#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<=9;i++){
        printf("Enter the mark of student %d\n: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=9;i++){
        if(arr[i]<=35) printf("Those damn brat roll number is : %d \n",i+1);
    }
}