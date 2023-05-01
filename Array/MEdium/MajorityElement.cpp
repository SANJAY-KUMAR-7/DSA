#include<bits/stdc++.h>
using namespace std;
int brute_approach(vector<int>);
int better_approach(vector<int>);
int moore_voting_algo(vector<int>);
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter no. of elements:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    cout<<"Majority Elemenet is:"<<brute_approach(v)<<endl;
    cout<<"majority Element using Map:"<<better_approach(v)<<endl;
    cout<<"Majority Element using Moore's Voting Algo:"<<moore_voting_algo(v);
    return 0;
}
 int brute_approach(vector<int> v){
    for(int i=0;i<v.size();i++)
    {   
        int count=0;
        for(int j=0;j<v.size();j++)
        {
            if(v[i]==v[j])
                count++;
        }
        if(count>v.size()/2)
            return v[i];
    }
    return -1;
}
int better_approach(vector<int> v){
    map<int,int> mpp;
    for(int i=0;i<v.size();i++)
    {
        mpp[v[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.second>v.size()/2)
            return it.first;
    }
    return -1;
}
int moore_voting_algo(vector<int> v)
{
    int count=0;
    int ele;
    for(int i=0;i<v.size();i++)
    {
        if(count==0)
        {
            count=1;
            ele=v[i];
        }
        else if(v[i]==ele){
            count++;
        }
        else
            count--;
    }
    int cnt=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==ele)   
            cnt++;
    }
    if(cnt>v.size()/2)
        return ele;
    
    return -1;
}