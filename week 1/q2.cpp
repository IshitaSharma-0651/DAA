#include<iostream>
using namespace std;
void binarysearch(int arr[],int i,int n,int k)
{
    int l=i;
    int r=n;
    int c=0;
    int flag=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        c++;
        if(arr[mid]==k)
        {
            flag=1;
            break;
        }
        else if(arr[mid]<k)
        {
            
            l=mid+1;
        }
        else
        {
            r=mid-1;
    
        }
        
    }
    if(flag==1)
    {
        cout<<"present"<<" "<<c<<endl;
    }
    else
    {
        cout<<"not present"<<" "<<c<<endl;
    }
    
}
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k;
        cin>>k;
        binarysearch(arr,0,n-1,k);
    }
}
