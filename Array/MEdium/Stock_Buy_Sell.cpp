#include<bits/stdc++.h>
using namespace std;
void buy_sell(vector<int>);
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    buy_sell(v);
    return 0;
}
void buy_sell(vector<int> v){
    int mini=v[0],profit=0;
    int maxProfit=INT_MIN;
    for(int i=1;i<v.size();i++)
    {
        int cost=v[i]-mini;
         maxProfit=max(maxProfit,cost);
        mini=min(mini,v[i]);
    }
    cout<<"You should buy stock when the price is:"<<mini;
    cout<<" And you should sell the stock when the price is:"<<maxProfit+mini;
}