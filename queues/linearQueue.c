#include <stdio.h>
#define MAX_SIZE 3


int linearQueue[MAX_SIZE];
int front = -1;
int rear = -1;

void isEmpty(){
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty.\n");
    }else
    {
        printf("The queue is not empty.\n");
    }    
}

void isFull(){
    if(rear == MAX_SIZE-1){
        printf("The queue is full.\n");
    }else
    {
        printf("The queue is not full.\n");
    }
}

int enqueue(int item){
    if(rear == MAX_SIZE-1){
        printf("Error 420: Cannot enqueue items, the queue is full. :(\n");
        return 0;
    }
    if(front == -1 && rear == -1)
        front = 0;
    rear++;
    linearQueue[rear] = item;
    printf("Enqueued element: %d\n", item);
}

int dequeue(){
    int item;
    if (front == -1 && rear == -1){
        printf("Error 404: Cannot delete items, the queue is empty :(\n");
        return -1;
    }
    item = linearQueue[front];
    if (front == rear){
        front = -1;
        rear = -1;
    }else{
        front++;
    }
    printf("%d has been deleted from the queue :)\n", item);
    return item;
}

void display() { 
    if (front == -1 && rear == -1) { 
        printf("Queue is empty.\n"); 
    } 
 
    printf("Elements in the queue: "); 
    for (int i = front; i <= rear; i++) 
        printf("%d ", linearQueue[i]); 
    printf("\n"); 
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(50);
    enqueue(30);
    display();
    isFull();
    dequeue();
    isEmpty();
    return 0;
}