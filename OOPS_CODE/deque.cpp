//  dequeue the elemenys psush back ,front,remove
#include <iostream>
#include <deque>
using namespace std;
int main()
{
  deque<int>d;
  d.push_front(10);
  d.push_back(20);
  d.push_front(5);
  d.pop_back();
  {
    cout<<"Current dequeue:";
    for(int i:d)
      cout<<i<<" ";
    cout<<endl;
  }
}
