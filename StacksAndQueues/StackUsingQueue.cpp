#include <bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q;
    public:
    void push(int x)
    {
        int s = q.size();
        q.push(x);
        for(int i =0;i<s;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    //rest all are same because they data in queue will always resembles the stack data after every push

    int pop(){
        int n = q.front;
        q.pop();
        return n;
    }

    int top()
    {
        return q.front;
    }

    int Size()
    {
        return q.size();
    }
};

int main()
{
    return 0;
}