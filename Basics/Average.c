#include<stdio.h>


int main (){
    float a,b,c,average;
        printf("Enter a :");
        scanf("%f",&a);
        printf("Enter b :");
        scanf("%f",&b);
        printf("Enter c :");
        scanf("%f",&c);

        average=(a+b+c)/3;

        printf("%.2f",average);
    return 0;
}