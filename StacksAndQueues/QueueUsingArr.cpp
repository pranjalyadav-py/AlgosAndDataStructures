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
        // and cursize increased
        currSize++:;
    }

    int pop(){
        // first check if queue is empty
        if(start == -1)
        {
            exit(1);
        }
        int x = arr[start];
        //note we have to check that we can do end -- or cursize == 1
        if(cursize == 1)
        {
            start  = -1;
            end = -1;
        }
        else
        { // wrong wrong wrong we gonna remove from the front
            // end--;
            // currSize--;
            start = (start + 1) % maxSize;
        }
        currSize-- ;
        return x;
    }

    int top()
    {
        // cause start is -1 only when array is empty 
        if(start == -1 )
        exit(1);
        
        return  arr[start];
    }

    int Size(){
        // maintaining this throughout the operations
        return currSize;
    }
};

int main()
{
    return 0;
    
}