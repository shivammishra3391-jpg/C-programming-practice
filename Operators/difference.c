#include<stdio.h>
int main(){
    float a,b;
        printf("Enter 1st number :");
        scanf("%f",&a);
        printf("Enter 2nd number :");
        scanf("%f",&b);

        float difference=a-b;
        printf("%.2f",difference);

    return 0;
}