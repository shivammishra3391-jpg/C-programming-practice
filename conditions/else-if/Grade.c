#include<stdio.h>

int main(){
    int marks;

    printf("Enter marks :");
    scanf("%d",&marks);

    if(marks>=80 && marks<=100){
        printf("Dist\n");
    }
    else if(marks>=60 && marks<80){
        printf("First Class\n");
    }
    else if(marks>=35 && marks<60){
        printf("Second Class\n");
    }
    else if (marks>=0 && marks<35){
        printf("Fail\n");
    }
    else{
        printf("Invalid Input\n");
    }
    
    return 0;
}