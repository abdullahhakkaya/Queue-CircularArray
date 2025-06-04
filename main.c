#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int queue[MAX];
int front=0,back=0,size=0;

int isEmpty(){
    if(size==0) return 1;
    else return 0;
}
int isFull(){
    if(size==MAX) return 1;
    else return 0;
}
void enqueue(int a){
    if(isFull()){
        printf("Queue is full.\n"); return;
    }
    queue[back++] = a;
    if(back==MAX) back=0;
    size++;
}
int dequeue(){
    int temp;
    if(isEmpty()){
        printf("Queue is empty.\n"); return -1;
    }
    temp=front;
    front++; if(front==MAX) front = 0;
    size--;
    return queue[temp];
}
int main(){
    if(isEmpty()) printf("Queue is empty...\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("%d Front of queue.\n",dequeue());
    for(int i=0;i<8;i++){
        enqueue(40+(i*10));
    }
    enqueue(30);
    for(int i=0;i<11;i++){
        printf("%d - ",dequeue());
    }
}