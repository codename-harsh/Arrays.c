#include <stdio.h>

int partition(int a[], int l, int r){
    if(l >= r)
        return l;
        int pivot = a[l];
        int p = l+1, q = r;
        while(p <= q) {
            while(a[p] < pivot )
                p++;
            while(a[q] > pivot) 
                q--;
            if(p < q) {
                int t= a[p]; a[p] = a[q]; a[q] = t;
                p++; q--;
            }
        }
        int t = a[l]; a[l] = a[q]; a[q] = t;
        return q;
}

void quicky(int a[], int l, int r) {
    if(l >= r)  
        return;
        int k = partition(a, l, r);
        quicky(a, l, k-1);
        quicky(a, k+1, r);
}


int main() {
    int n = 8;
    int a[] = { 5,3,2,6,7,4,2,9};
    int l = 0, r = n-1;
    quicky(a, l, r);
    for(int i = 0; i<n; i++)    
        printf("%d ",a[i]);
    return 0;
}