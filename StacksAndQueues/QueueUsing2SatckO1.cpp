#include <bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;

    public:
    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        int x = s2.top();
        s2.pop();
        return x;
    }

    //amortised O(1)
    int top()
    {
       while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        return  s2.top();;
    }

    int size()
    {
        // because size can be asked in middle of pushes and pops
        return s2.size() + s1.size();
    }
};

int main()
{
    return 0;
}