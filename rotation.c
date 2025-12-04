#include<stdio.h>

void reverse(int arr[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
}
int main(){
    int arr[7]={2,3,4,5,53,2,3};
    //gina-chuna part hi reverse/rotation krna he jab toh :
// for(int i=1,j=5;i<=j;i++,j--){
// int temp = arr[i];
// arr[i]=arr[j];
// arr[j]=temp;
// }
// for(int i=0;i<=6;i++){
//     printf("%d  ",arr[i]);
// }
// }

// Now user see input lenge to utna hi part rotate hoga ... it's kinda hard to think yaknow :/

int k;
printf("Enter the number of rotations : ");
scanf("%d",&k);
int n = 7;
k = k%n;
reverse(arr,0,n-1);
reverse(arr,0,-1);
reverse(arr,k,n-1);
for(int i=0;i<=6;i++){
    printf("%d  ",arr[i]);
}
}
