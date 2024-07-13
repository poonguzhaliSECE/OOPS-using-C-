#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l={1,2,3,4};
    l.push_back(6);
    l.push_front(8);
    for(int num:l)
    {
        cout<<num;
    }
    return 0;
}
