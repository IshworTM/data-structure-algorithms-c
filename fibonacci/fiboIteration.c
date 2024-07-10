//Fibonacci series using iteration.

#include <stdio.h>

void fiboIteration(int n){
    int previous = 0, current = 1, next;

    printf("Fibonacci Series:\n");

    if (n > 0){
        printf("%d ", previous);
    }

    if (n > 1){
        printf("%d ", current);
    }
    
    for (int i = 2; i < n; i++){
        next = previous + current;
        printf("%d ", next);
        previous = current;
        current = next;
    }
}

int main(){
    int terms;
    printf("Enter the number of terms:\n>> ");
    scanf("%d", &terms);
    fiboIteration(terms);
    return 0;
}