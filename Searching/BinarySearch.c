#include<stdio.h>
int main(){
    int n,key;
    printf("Enter the order : \n");
    scanf("%d",&n);
    printf("Enter the key : \n");
    scanf("%d",&key);
    int a[n]; printf("Enter the elements accordingly : \n");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("\n");
    int l=0,r=n-1,f=0;   // Flag variable lgana boht zrurui hai bsdk nahi to matter ho jayega :D//
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==key) {printf("Present !!");
            f = 1;
            break;
        }
        else if(a[mid]>key) r = mid-1;
        else if(a[mid]<key) l = mid+1;
    }
    if(f!=1) printf("Not Present :/");
return 0;
}