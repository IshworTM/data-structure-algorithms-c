#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;

bool isEmpty(){
    return top == -1; // directly returns true if top equals to -1 (NULL / empty) else false
}

bool isFull(){
    return top == MAX_SIZE -1; //directly returns true if top equals max size else false
}

void push(int val){
    if (isFull()){
        printf("Stack overflow.\n");
        return;
    }
    stack[++top] = val; //first increments the value of top and then assigns val (pre increment)
    printf("%d has been pushed to the stack.\n", val);
}

int pop(){
    if (isEmpty()){
        printf("Stack underflow.\n");
        return -1;
    }   
    return stack[top--]; //directly returns the top of the stack and then decrements it (post decrement)
}

int peek(){
    if (isEmpty()){
        printf("Stack empty.\n");
        return -1;
    }
    return stack[top];
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    printf("TOS before popping: %d\n", peek());
    printf("Popped: %d\n", pop());
    printf("TOS after popping: %d\n", peek());
    return 0;
}