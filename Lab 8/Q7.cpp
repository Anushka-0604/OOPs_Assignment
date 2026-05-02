#include <iostream>
using namespace std;

template <class T>
class Queue {
    T arr[5];
    int front=0, rear=-1;

public:
    void enqueue(T x) {
        if(rear == 4) cout << "Full\n";
        else arr[++rear] = x;
    }

    void dequeue() {
        if(front > rear) cout << "Empty\n";
        else cout << "Removed: " << arr[front++] << endl;
    }
};

int main() {
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
}
