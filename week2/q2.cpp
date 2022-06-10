#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    vector<int> v, sol;
    cin>>t;
    while(t--)
    {
        int flag=0;
        int temp;
        int n;
        cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-2;i++)
    {
       
        int l=0;
        int r=n-1;
        while(l<r)
        {
            if(v[l]+v[r]==v[i])
            {
                cout<<l;
                cout<<r;
                cout<<i<<endl;
                flag=1;
                break;
            }
            else if(v[l]+v[r]>v[i])
            {
                r--;
            }
            else
            l++;
           
            
        }
        
        
    }
    if(flag==0)
            {
                cout<<"no seq"<<endl;
            }
     
      v.clear();  
    }
}