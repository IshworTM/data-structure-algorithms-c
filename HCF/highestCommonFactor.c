#include <stdio.h>

int highestCommonFactor(int num1, int num2){
    if (num2 == 0){
        return num1;
    }
    else{
        return highestCommonFactor(num2, num1 % num2);
    }
}

int main(){
    int num1, num2;
    printf("Enter the first number:\n>> ");
    scanf("%d", &num1);
    printf("Enter the second number:\n>> ");
    scanf("%d", &num2);

    if(num1 < 0 || num2 < 0){
        printf("Not a positive number.\n");
        return -1;
    }
    else{
        int result = highestCommonFactor(num1, num2);
        printf("The highest common division/factor of %d and %d is %d.\n", num1, num2, result);
    }
    return 0;
}