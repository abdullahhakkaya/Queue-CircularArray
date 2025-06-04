
# Circular Queue in C

This project demonstrates a simple implementation of a **circular queue** using a fixed-size array in the C programming language.

## Features

- Circular queue with a maximum size of 10  
- Core operations:  
  - `enqueue(int a)` – Add an element to the back of the queue  
  - `dequeue()` – Remove and return the front element of the queue  
  - `isEmpty()` – Check if the queue is empty  
  - `isFull()` – Check if the queue is full  
- Wrap-around behavior when reaching the end of the array  
- Prevents overflow and underflow with checks  

## How to Compile

Use a C compiler like `gcc`:

```bash
gcc main.c -o queue
```

## How to Run

After compilation:

```bash
./queue
```

## Sample Input

```bash
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
```

## Sample Output

```bash
Queue is empty...
10 Front of queue.
20 - 30 - 40 - 50 - 60 - 70 - 80 - 90 - 100 - 110 - Queue is empty.
-1 -
```
