#include <stdio.h>

#define MAX_SIZE 3 // define the max size of the stack globally

// creating an array with the max size
int stack[MAX_SIZE];

// creating the top variable that keeps track of TOS and initializing it to -1
int top = -1;

// function to check whether the stack is empty or not
void isEmpty(){
    if (top == -1){
        printf("The stack is empty.\n");
    }else {
        printf("The stack is not empty.\n");
    }    
}

// function to check whether the stack is full or not
void isFull(){
    if(top == MAX_SIZE-1){
        printf("The stack is full.\n");
    }else {
        printf("The stack is not full.\n");
    }
}

// push operation
void push(int item){
    if(top == MAX_SIZE - 1){
        printf("Error 420: Stack overflow. :(\n");
        return;
    }
    top++; //increment the top so that there's a free space to push
    stack[top] = item;
    printf("%d has been added to the stack. :)\n", item);
}

// pop operation 
int pop(){
    int item;
    if (top == -1){
        printf("Error 404: Stack underflow. :(\n");
        return -1;
    }
    item = stack[top]; //assign the data to a variable in case you need to return it..
    top--; //decrement the top variable so that the item is deleted or popped..
    printf("%d has been popped from the stack. :o\n", item);
}

// peek operation
int peek() { 
    if (top == -1) { 
        printf("Error 404: Stack is empty. :(\n"); 
        return -1;
    } 
    printf("Top of the stack (TOS): %d\n", stack[top]);
}

// main function
int main(){
    isFull();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    peek();
    isEmpty();
    pop();
    peek();
    return 0;
}