// multi map is similar to map
// but it allows multiple key value pairs
//KEY FEAURES:
// ->store multiple key value pairs based on same key
// ->key are automatically sorted
// ->Allows traversal in sorted order of key
#include<iostream>
#include<map> 
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>m={{1,"one"},{2,"two"}{3,"three"}{4,"four"}};
    m.insert({"five"});
    for(const auto &pair:m)
    {
        cout<<pair.first<<":"<<pair.second<<"\n;"
    }
    return 0;
    
}