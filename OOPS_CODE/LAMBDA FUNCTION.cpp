// lambda fun are covuinient way to define as anonymous function in object inline
// lambda function are expression can capture variables from the surrounding code and provide the easiest way to define sort single function
// Inline fun def:
// var capture
// felxability
// based on the effiency
// Simple lambda function
#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    vector<int>v={1,2,3,4,5};
    // store the value insidde the box
    auto print=[](int value){
           cout<<value<<" ";
    }
}