#include<iostream>
#include<algorithm>
using namespace std;
bool comparator(string a,string b)
{
    return a<b;
}
int main()
{
    int n=5;
    string arr[10];
    cout<<"Enter\n";
    for(int i=0;i<n;++i)
    {
       getline(cin,arr[i]);
    }
    sort(arr,arr+n,comparator);
       for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
