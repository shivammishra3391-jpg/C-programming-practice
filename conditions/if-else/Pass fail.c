#include<stdio.h>


int main (){
    int marks;
        printf("Enter Marks :");
        scanf("%d",&marks);

        if(marks>=40){
            printf("pass");
        }
        else{
            printf("fail");
        }
    return 0;
}