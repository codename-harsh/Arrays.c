#include<stdio.h>
int main(){
    int arr[10] = {4,8,7,5,2,9,9,1,8,6};
    int x = 12,c=0;
    for(int i=0;i<=9;i++){
        for(int j=i+1;j<=9;j++){
            for(int k=j+1;k<=9;k++){
            if(arr[i]+arr[j]+arr[k] == x) {
                c++;
            printf("\n(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",c);
    return 0;
}
//damn !!