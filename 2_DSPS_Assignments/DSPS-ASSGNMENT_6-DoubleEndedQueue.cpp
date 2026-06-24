#include <iostream>
using namespace std;

const int MAX = 10;
int deque[MAX];
int front = -1, rear = -1;

bool isFull() {
    return ((front == 0 && rear == MAX - 1) || (front == rear + 1));
}

bool isEmpty() {
    return (front == -1);
}

void insertFront(int key) {
    if (isFull()) {
        cout << "Overflow\n";
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = MAX - 1;
    } else {
        front = front - 1;
    }
    deque[front] = key;
    cout << "Inserted " << key << " at front\n";
}

void insertRear(int key) {
    if (isFull()) {
        cout << "Overflow\n";
        return;
    }
    if (front == -1) {
        front = rear = 0;
    } else if (rear == MAX - 1) {
        rear = 0;
    } else {
        rear = rear + 1;
    }
    deque[rear] = key;
    cout << "Inserted " << key << " at rear\n";
}

void deleteFront() {
    if (isEmpty()) {
        cout << "Queue Underflow\n";
        return;
    }
    cout << "Deleted " << deque[front] << " from front\n";
    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front = front + 1;
    }
}

void deleteRear() {
    if (isEmpty()) {
        cout << "Queue Underflow\n";
        return;
    }
    cout << "Deleted " << deque[rear] << " from rear\n";
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = MAX - 1;
    } else {
        rear = rear - 1;
    }
}

int getFront() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return -1;
    }
    return deque[front];
}

int getRear() {
    if (isEmpty() || rear < 0) {
        cout << "Queue is empty\n";
        return -1;
    }
    return deque[rear];
}

void display() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Deque elements: ";
    int i = front;
    while (true) {
        cout << deque[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }
    cout << endl;
}

int main() {
    int choice, element;

    do {
        cout << "\nDEQUE IMPLEMENTATION\n1. Insert Front\n2. Insert Rear\n3. Delete Front\n4. Delete Rear\n5. Get Front\n6. Get Rear\n7. Display\n8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter element to insert at front: ";
                cin >> element;
                insertFront(element);
                break;
            case 2:
                cout << "Enter element to insert at rear: ";
                cin >> element;
                insertRear(element);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                cout << "Front element: " << getFront() << endl;
                break;
            case 6:
                cout << "Rear element: " << getRear() << endl;
                break;
            case 7:
                display();
                break;
            case 8:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please enter again.\n";
        }
    } while (choice != 8);

    return 0;
}
