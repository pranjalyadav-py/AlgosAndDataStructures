#include <bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;
    public:
    void push(int x)
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop()
    {
        if(s1.empty())
        exit(1); 

        int n = s1.top();
        s1.pop();
        return n;
    }
    
    int top()
    {
        if(s1.empty())
        exit(1);

        return s1.top();
    }

    int size()
    {
        return s1.size();
    }
};

int main()
{
    return 0;
}