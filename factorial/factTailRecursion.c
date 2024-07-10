// Optimizing the old factorial program using recursion.

#include <stdio.h>
#include <time.h>

int factTailRecursion(int n, int acc){
    if(n == 0 || n == 1){
        return acc;
    }
    return factTailRecursion(n - 1,  n * acc);
}

int main(){
    clock_t begin = clock();
    int n, fact;
    printf("Enter the number:\n>> ");
    scanf("%d", &n);
    fact = factTailRecursion(n, 1);
    printf("\nThe factorial of %d is %d.\n", n, fact);
    clock_t end = clock();
    double time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
    printf("\nTime taken to compute: %.6fs\n", time_spent);
    return 0;
}