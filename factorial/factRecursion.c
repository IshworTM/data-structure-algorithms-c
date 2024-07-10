//Factorial using recursion.

#include <stdio.h>
#include <time.h>

int factRecursion(int n){
    if (n == 1 || n == 0){
        return 1;
    }else{
        return n * factRecursion(n - 1);
    }
}

int main(){
    clock_t begin = clock();
    int n, result;
    printf("Enter the number:\n>> ");
    scanf("%d", &n);
    result = factRecursion(n);
    printf("The factorial of %d is %d\n\n", n, result);
    clock_t end = clock();
    double time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
    printf("\nTime taken to compute: %.6fs\n", time_spent);
    return 0;
}