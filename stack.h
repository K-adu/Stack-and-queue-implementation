#define MAX_STACK_SIZE 100

class Stack {
public:
    Stack();
    ~Stack();

    void push(int element);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();

private:
    int elements[MAX_STACK_SIZE];
    int top;
};
