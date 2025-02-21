#include <stdio.h>

int main(void){ 
    int age;

    printf("Enter your age >>> ");
    scanf("%d", &age); 

    if (age >= 18)
    {
        printf("You can"); 
    } else
    {
        printf("You can't"); 
    }

    return 0; 
}