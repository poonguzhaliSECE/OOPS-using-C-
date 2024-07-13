//the funstionality value store key value pairs.
//KEY FEATURES
//->shows unique key value pairs
//->keys are automatically sorted
//->Allows traversal in sorted order of keys
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>m={{1,"one"},{2,"two"}{3,"three"}{4,"four"}};
    m[5]="five";
    for(const auto &pair:m)
    {
        cout<<pair.first<<":"<<pair.second<<"\n;"
    }
    return 0;
    
}