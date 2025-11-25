#include<stdio.h>
void fun(int j[]){  // mistake dekhe bc idhar int j[] krna tha just j[] nahi ;)
    int temp = j[0];
    j[0]=j[1];
    j[1]=temp;
    return;
}
int main(){
    int arr[2] = {3,5};
    printf("%d %d",arr[0],arr[1]);
    printf("\n\n\n");
    fun(arr); // pure array ka address nahi bas array ka first element ka address pass ho rha .
    printf("%d %d",arr[0],arr[1]);
}