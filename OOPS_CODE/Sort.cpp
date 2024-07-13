#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l;
    int num;
    while(true)
    {
        cout<<"Enter the number";
        cin>>num;
        if(num==-1)
        {
            cout<<"Sorted List: "<<num;
        }
    }
    for(int num:l)
    {
        l.push_back(num);
        l.sort(num);
    }
    return 0;
}
