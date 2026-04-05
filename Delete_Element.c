#include <stdio.h>
int main()
{
    int n, pos;
    printf("Enter the number of elements : \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array : \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the position where you want to delete the element: \n");
    scanf("%d", &pos);
    for (int i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("Array after delete of the new element is : \n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}