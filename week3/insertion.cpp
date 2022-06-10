
#include<iostream>

using namespace std;
void insertionSort(int arr[],int n);

int main()
{
    int t;
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
  insertionSort(arr, n);
}
return 0;

}
void insertionSort(int arr[],int n)
    {
int i;
int j;
int temp;
int comp=0;
int shift =0;
for(i=1;i<n;i++)
{
temp=arr[i];
j=i-1;
shift++;                                       
while(j>=0 && arr[j]>temp)
{
arr[j+1]=arr[j];
j--;
comp++;
shift++;
}
arr[j+1]=temp;
}
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<"comparision ="<<comp<<"shifts ="<<shift<<endl;
}
