#include <bits/sdtc++.h>

using namespace std

class Stack{
    int size;
    int top;
    int * arr;
    int Size;

    public:
    Stack(){
        size = 1000;
        top = -1;
        arr = new int[size];
    }

    void push(int x)
    {
        top++;
        arr[top] = x;
    }

    int pop()
    {
        int x = arr[top];
        top--;
        return x;
    }

    int top()
    {
        return arr[top];
    }

    int Size()
    {
        // arr size can be anything btw 1000 and else so top
        return top + 1; // top as arr indices
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.pop()<<" ";
    cout<<s.top()<<" ";
    cout<<s.Size()<<" ";
}
