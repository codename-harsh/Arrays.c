#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("\nEnter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n\n\n\n");
    int max = arr[0];
    for(int i=0;i<=4;i++){
    if(max<arr[i]) max = arr[i];
    }
    printf("The max among the array elements is  : %d",max);
    return 0;
}
// isme hamne system laga dia ki array ka pehla element hi max me dal ke baki compare krdia ;/ no in the second code ham new library fncn ka use krenge limits.h ;)