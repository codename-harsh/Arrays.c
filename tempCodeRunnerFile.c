#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
float a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double d = b*b - 4*(a*c);
     if (d > 0){
        double root1 = (-b + sqrt(d)) / (2*a);
        double root2 = (-b - sqrt(d)) / (2*a);
        printf("REAL AND DISTINCT \n");
         printf("%.2lf %.2lf",root1,root2);
    } else if (d == 0) {
        double root = -b / (2*a);
        printf("REAL AND EQUAL \n");
         printf("%.2lf ",root);
    } else {
        double realPart = -b / (2*a);
        double imagPart = sqrt(-d) / (2*a);
        printf("IMAGINARY ROOTS\n");
        printf("%.2lf + %.2lfi\n", realPart, imagPart);
        printf("%.2lf - %.2lfi\n", realPart, imagPart);
    }
}
