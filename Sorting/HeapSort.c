#include <stdio.h>
void heapify(int a[], int n, int i) {
    int l = 2*i +1, r = 2*i +2, max = i;
    if(l < n && a[l] > a[max]) 
        max = l;
    if(r < n && a[r] > a[max]) 
        max = r;

        if(max != i){
            int t = a[max]; a[max] = a[i]; a[i] = t;
            heapify(a, n, max);
        }
}

void HeapSort(int a[], int n){
    for(int i = n/2 ; i >= 0; i--) {
        heapify(a, n, i);
    }
    for(int i = n-1; i>=1; i--) {
        int t = a[i]; a[i] = a[0]; a[0] = t;
        n--;
        heapify(a, n, 0); // using 0 as initial index//
    }
}

int main() {
    int n; printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n]; printf("Enter the elements accordingly : \n");
    for(int i = 0; i< n;i ++)
        scanf("%d",&a[i]);
        printf("The array after the sorting is :  \n");
        HeapSort(a, n);
        for(int i = 0; i<n; i++)
            printf("%d ",a[i]);
        return 0;
}