#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[20];
    int n;
    cout<<"No of elements: ";
    cin>>n;
    cout<<"Enter the numbers: ";
    for(int i=0;i<n;++i)
    {
    	cin>>a[i];
	}
	sort(a,a+n);
	cout<<"After sort:\n";
	for(int i=0;i<n;++i)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
