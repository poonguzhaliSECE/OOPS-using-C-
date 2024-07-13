#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<string>s;
   std:: cin>>s;
    if(s==1)
    {
        break;
        s.push_back(s);
    }
    for (string i:s)
    {
        cout<<"Unique Words"<<i<<" ";
    }
    return 0;
}
