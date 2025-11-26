#include <stdio.h>
#include <limits.h>

int main() {
    int arr[10] = {4,3,7,5,2,10,9,1,8,6};
    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0; i < 10; i++) {
        if (arr[i] > max) {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] < max) {
            smax = arr[i];
        }
    }

    printf("Max = %d\n", max);
    printf("Second Max = %d\n", smax);

    return 0;
}
