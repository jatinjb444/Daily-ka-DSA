// Function to push an integer into the stack.

/*
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/
int top = -1;
void MyStack ::push(int x) {
    // Your Code
    top++;
    arr[top] = x;
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
  if (top == -1) return -1; // or throw error
        int val = arr[top];
        top--;
        return val;
 }