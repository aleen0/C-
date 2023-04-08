#include <iostream>
#define size 30

using namespace std;

int front = -1, rear = -1;
int queue[size];

void enqueue(int x) {
    if (rear == size - 1) {
        cout << "Queue overflow\n";
    } else {
        if (front == -1) {
            front = 0;
        }
        cout<<"Enter Element: ";
        cin>>x;
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue underflow\n";
   } else {
        cout << "Removed " << queue[front] << endl;
        front++;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is empty\n";
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

void peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
    } else {
        cout << "Front element: " << queue[front] << endl;
    }
}

int main() {
	int a;
    enqueue(a);
    display();
    peek();
    dequeue();
    peek();
    display();
    return 0;
}