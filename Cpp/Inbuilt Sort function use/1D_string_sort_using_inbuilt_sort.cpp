#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
	string a;
	char b[100];
	char c[100];
	scanf(" ");
	cin>>a;                     //a is a string variable
	cin>>b;                     // b is a char array
	scanf(" ");
	cin.getline (c, 100);
	//gets(c);                    //c is a char array taking a sentense
	cout<<a<<" "<<b<<endl;
	cout<<"enter:\n";
	sort(a.begin(),a.end());
	sort(b,b+strlen(b));
	sort(c,c+strlen(c));
	cout<<"After using sort function:"<<endl;
	cout<<a<<" "<<b<<endl;
	puts(c);
	cout<<"\n list: \n";
	return 0;
}
