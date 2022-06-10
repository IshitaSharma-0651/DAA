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
        int c=0;
        int flag=0;
        int temp;
        int n;
        cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    int k;
    cin>>k;
    sort(v.begin(),v.end());
 for(int i=0;i<n;i++)
 {
     int j=n-1;
     while(i<j)
     {
         if(v[j]-v[i]==k)
         {
             flag=1;
             c++;
             j--;
         }
         else if(v[j]-v[i]>k)
         {
             j--;
            
         }
         else
         break;
     }
 }
 if(flag=1){
     cout<<c<<endl;
 }
   
     
      v.clear();  
    }
}

