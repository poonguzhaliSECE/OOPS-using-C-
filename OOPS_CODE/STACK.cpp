// ========STACK==========

// STACK follow LIFO order
// Provide push pop and top operation
// *No iteration or random access

// =======QUEUE============

// it follows FIFO order
// Provides push pop and front operation
// No iteration or random access
// queue is a container adopter that provides FIFO
// it id compared to deque
#include<iostream>
#include<stack>  //#include<queue>
using namespace std;
int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    while(!st.empty())
    {
        cout<<"TOP"<<st.top()<<" ";
        st.pop();
    }
    return 0;
}