#include <stdio.h>
#include <limits.h>

int main() {
    int arr[10] = {4,3,7,5,2,10,9,1,8,6};
    int brr[10];
    for(int i=0;i<=9;i++){
        brr[i] = arr[9-i];
    } // isme to hamne ek extra array use kr lia but abhi bina extra array use kiye ham number reverse krenge !
    for(int j=0;j<=9;j++){
        printf("%d ",brr[j]);
    }
    
    //     for(int i=9;i>=0;i--){
    //     printf("%d ",arr[i]);
    // } // toh ye to bas loop me chhedkhani krke ho gya and ab array me hi krna haii
    


    return 0;
}
