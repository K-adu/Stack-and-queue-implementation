#define MAX 100
class Queue{
private:
char elements[MAX];
int f;
int r;
public:
Queue();
~Queue();

void enqueue(char element);
char dequeue();
bool isEmpty();
bool isFull();
char front();
char rear();
};
