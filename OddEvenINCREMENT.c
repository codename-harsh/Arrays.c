#include<stdio.h>
int main(){
    int arr[7];
    for(int j=0;j<=6;j++){
        printf("\nEnter the element number %d : ",j+1);
        scanf("%d",&arr[j]);
    }
    for(int i=0;i<=6;i++){
        if(i%2==0) {arr[i] +=10;}
        else {arr[i] *=2;}
    }
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
}