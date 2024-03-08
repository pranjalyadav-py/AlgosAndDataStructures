#include <bits/stdc++.h>
using namespace std;



class Queue{
    int start, end, currSize, maxSize;
    int * arr;

    public:
    Queue(){

        arr = new int[1000];
        start = -1;
        end = -1;
        currSize = 0;
    }
    Queue(int mxsz)
    {
        maxSize = mxsz;
        arr = new int[mxsz];
        start = -1;
        end = -1;
        currSize = 0;
    }

    void push(int x)
    {
        // check if size is too much
        if(currSize == maxSize)
        {
            exit(1);
        }

        if(end == -1)
        {
           // nothing have started;
           start = 0;
           end = 0;
        }
        else
        end = (end + 1)%maxSize;

        arr[end] = x;

    }
}