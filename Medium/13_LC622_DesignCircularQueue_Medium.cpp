// LeetCode 622: Design Circular Queue (Medium)
class MyCircularQueue {
public:

    int arr[1000];
    int front, rear, size, capacity;

    MyCircularQueue(int k) {
        front = 0;
        rear = -1;
        size = 0;
        capacity = k;
    }

    bool enQueue(int value) {

        if(size == capacity)
        {
            return false;
        }

        rear = (rear + 1) % capacity;
        arr[rear] = value;
        size++;

        return true;
    }

    bool deQueue() {

        if(size == 0)
        {
            return false;
        }

        front = (front + 1) % capacity;
        size--;

        return true;
    }

    int Front() {

        if(size == 0)
        {
            return -1;
        }

        return arr[front];
    }

    int Rear() {

        if(size == 0)
        {
            return -1;
        }

        return arr[rear];
    }

    bool isEmpty() {

        return size == 0;
    }

    bool isFull() {

        return size == capacity;
    }
};
