#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int>vec;
   int num,sum=0;
   while(true)
   {
       cout<<"Enter the num";
       cin>>num;
       if(num<0)break;
       vec.push_back(num);
   }
   for(int num:vec)
   {
       sum+=num;
   }
   cout<<"The Sum Is:"<<sum<<endl;

   return 0;

}
