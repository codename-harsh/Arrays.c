#include<stdio.h>
int main(){
    int n,key;
    printf("Enter the order : \n");
    scanf("%d",&n);
    printf("Enter the key : \n");
    scanf("%d",&key);
    int a[n]; printf("Enter the elements accordingly : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
        // for(int i=0;i<n;i++){
        //     if(key==a[i]) {printf("Present !!"); }
        //     return 0;
        // }
        // printf("Not Present :/");
        int flag=0;
        for(int i=0;i<n;i++){
            if(key==a[i]){ flag=1; break; }
        }
if(flag==1) printf("Present !!");
else printf("Not Present :/");
return 0;
}