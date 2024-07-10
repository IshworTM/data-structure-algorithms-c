#include <stdio.h>
#define MAX_SIZE 3

int circularQueue[MAX_SIZE];
int front = -1;
int rear = -1;

int isFull(){
    return (front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1);
}

int isEmpty() {
    return (front == -1 && rear == - 1);
}

void display(){
    if (isEmpty()){
        printf("The queue is empty, nothing to display.\n");
        return;
    }
    printf("Present elements in the queue:\n");
    int i = front;
    do{
        printf(">> %d\n", circularQueue[i]);
        i = (i + 1) % MAX_SIZE;
    } while ( i != (rear + 1) % MAX_SIZE);
    printf("\n");
}

void enqueue(int element){
    if (isFull()){
        printf("Error 404: Cannot enqueue items, the queue is full.\n");
        return;
    }else if (isEmpty()){
        front = rear = 0;
    }else{
        rear = (rear + 1) % MAX_SIZE;
    }
    circularQueue[rear] = element;
    printf("%d has been enqueued to the queue.\n", element);
}

void dequeue(){
    if (isEmpty()){
        printf("Error 404: Cannot delete items, the queue is empty.\n");
        return;
    }
    int element = circularQueue[front];
    printf("%d has been dequeued from the queue.\n", element);
    if (front == rear){
        front = rear = -1;
    }else{
        front = (front + 1) % MAX_SIZE;
    }
}

int main(){
    enqueue(10);
    enqueue(50);
    enqueue(40);
    enqueue(30);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    enqueue(69);
    enqueue(69);
    enqueue(69);
    display();
}
