/* A proper optimised bubble sorting code !! */
#include<stdio.h>
#include<stdbool.h>
int main(){
    int n; puts("Enter the number of elements ");
    scanf("%d",&n);
    int arr[n];
    puts("Enter the elements accordingly :");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
for(int i=0;i<n-1;i++){
    bool flag = true;
for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1])
            {
                int  temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                bool flag  = false;
            }
        }
        if(flag == true) break;
    }
puts("The sorted elements are as follows :");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]); }
    return 0;
}
