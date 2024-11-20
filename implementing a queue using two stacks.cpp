#include <iostream>
#include <stack>
using namespace std;

class QueueUsingStacks {
private:
    stack<int> stack1, stack2;

public:
    void enqueue(int item) {
        stack1.push(item);
        cout << "Enqueued: " << item << endl;
    }

    void dequeue() {
        if (stack2.empty()) {
            while (!stack1.empty()) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        if (!stack2.empty()) {
            int dequeuedItem = stack2.top();
            stack2.pop();
            cout << "Dequeued: " << dequeuedItem << endl;
        } else {
            cout << "Queue is empty!" << endl;
        }
    }
};

int main() {
    QueueUsingStacks q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.enqueue(40);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    return 0;
}