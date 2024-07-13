
#include <iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main() 
{
    unordered_multimap<int,char> um;
 um.insert(make_pair(1,"poova"));
 um.insert(make_pair(1,"poojana"));
 um.insert(make_pair(1,"Nithya"));
    for(const auto & pair:um ){
    cout<<pair.first<<" : "<<pair.second<<endl;
    }
    return 0;
}