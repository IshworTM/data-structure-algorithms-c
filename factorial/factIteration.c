//Factorial using iteration.

#include <stdio.h>
#include <time.h>

void factIteration(int n){
    unsigned long fact = 1;
    int i;
    if (n == 1 || n == 0){
        fact = 1;
        printf("The factorial of %d is %lu.\n\n", n, fact);
    }
    else if (n < 0){
        printf("Error 404: %d is a negative number, factorial only exists for non-negative numbers.\n\n", n);
    }
    else{    
        for(i = 1; i <= n; i++){
            fact = fact * i;
        }
        printf("The factorial of %d is %lu.\n\n", n, fact);
    }
}
int main(){
    clock_t begin = clock();
    int n;
    printf("Enter the number:\n>> ");
    scanf("%d", &n);
    factIteration(n);
    clock_t end = clock();
    double time_spent = (double) (end - begin) / CLOCKS_PER_SEC;
    printf("\nTime taken to compute: %.6fs\n", time_spent);
    return 0;
}