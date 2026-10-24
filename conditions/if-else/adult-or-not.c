#include<stdio.h>

int main(){
    int age;
        printf("Enter age :");
        scanf("%d",&age);

        if(age>18)
        {
            //Block --> Combination of statements.
            printf("Adult\n");
            printf("They can vote.\n");
            printf("They can drive.\n");
        }
        else
        {
            printf("Not adult!\n");
        }

    printf("thank you...");
    return 0;
}