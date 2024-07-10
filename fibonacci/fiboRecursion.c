//Fibonacci series using recursion.

#include <stdio.h>

int fiboRecursion(int n){
    if (n == 1 || n == 0){
        return n;
    }
    else{
        return fiboRecursion(n - 1) + fiboRecursion(n - 2);
    } 
}

int main(){
    int n;
    printf("Enter the number of elements:\n>> ");
    scanf("%d", &n);
    printf("The %d elements in Fibonacci Series are:\n", n);
    for (int i = 0; i < n; i++){
        printf("%d ", fiboRecursion(i));
    }
    printf("\n");
    return 0;
}