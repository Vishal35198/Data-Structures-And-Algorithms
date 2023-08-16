#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Min and Max Heap Implementation 
    priority_queue<int> maxi;
    maxi.push(2);
    maxi.push(4);
    maxi.push(1);
    maxi.push(0);
    // cout<<maxi.top()<<" ";
    int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
        //pop Elemets 
        
    }
    //output is 4 2 1 0;
    set<int> s;//stores unique values 
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    // s.erase(s.begin());//remove the first number
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    if(s.find(5)!=s.end()) cout<<"Yes Present !"<<" ";
    else cout<<"No";





    
}