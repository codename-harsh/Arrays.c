#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[9]={3,5,4,33,4,55,5,3,54};
    int x;
    int idx=0;
    scanf("%d",&x);
    bool flag = false;
    for(int i = 0;i<=8;i++){
        if(arr[i]==x) {     flag = true; idx=i;
        break;}
    }
if(flag==false) printf("%d is not in the array :/",x);
else printf("%d is in the array :0",x);
printf("%d",idx);

}