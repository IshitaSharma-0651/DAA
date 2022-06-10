#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0;
        int c=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k;
        cin>>k;
        for(int i=0;i<n;i++)
        {
            c++;
            if(arr[i]==k)
            {
                flag=1;
                break;
            }
            
        }
        if(flag==1)
            {
                cout<<"Present"<<" "<<c<<endl;
            }
            else{
                cout<<"not present"<<" "<<c<<endl;
            }
    }
}
