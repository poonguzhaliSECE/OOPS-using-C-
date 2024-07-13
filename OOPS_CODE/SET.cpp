#include<iostream>
#include<set>
//KEY FEATURES Set
//store unique elements
//automatically sort the element
//Time complexity O(log n)
//No random access
using namespace std;
int main()
{
    set<int>s={9,5,1,2,3,4,6,5};
    s.insert(6);
    for(int i :s)
    {
        cout<<i<<" ";
    }
    return 0;

}
