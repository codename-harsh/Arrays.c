#include <stdio.h>
int main(){
    int a[100], n, item, pos ;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);
    printf("Enter the elements of array : \n");
    for(int i = 0; i<n ; i++) scanf("%d",&a[i]);
    printf("Enter the element to be sorted : \n"); scanf("%d",&item);
    printf("Enter the position where you want to insert the element: \n"); scanf("%d",&pos);
    for(int i = n; i >= pos; i--){
        a[i] = a[i-1];
    }
    a[pos-1] = item;
    n++;
    printf("Array after insertion of the new element is : \n");
    for(int i = 0; i<n; i++) printf("%d ",a[i]);
    return 0;
}