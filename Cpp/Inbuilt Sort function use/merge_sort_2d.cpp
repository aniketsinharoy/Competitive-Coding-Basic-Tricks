#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(vector <vector <int>> &a,int l,int m,int h)
{
    int i,j,k;
    vector<vector<int>> b( 2 , vector<int> (h+1));
    i=l;
    j=m+1;
    k=l;
    while(i<=m && j<=h)
    {
        if(a[0][i]>=a[0][j])
        {
            b[0][k]=a[0][j];
            b[1][k]=a[1][j];
            ++j;
            ++k;
        }
        if(a[0][i]<a[0][j])
        {
           b[0][k]=a[0][i];
           b[1][k]=a[1][i];
           ++i;
           ++k;
        }
    }
    if(i>m)
    {
        while(j<=h)
        {
            b[0][k]=a[0][j];
            b[1][k]=a[1][j];
            ++j;
            ++k;
        }
    }
    if(j>=h)
    {
        while(i<=m)
        {
            b[0][k]=a[0][i];
            b[1][k]=a[1][i];
            ++i;
            ++k;
        }
    }
    for(k=l;k<=h;++k)
    {
        a[0][k]=b[0][k];
        a[1][k]=b[1][k];
    }
}
void mergesort(vector <vector <int>> &a,int l,int h)
{
    int m;
    m=(l+h)/2;
    if(l<h)
    {
        mergesort(a,l,m);
        mergesort(a,m+1,h);
        merge(a,l,m,h);
    }
}
int main()
{
	vector <vector <int>> arr{{2,3,1},{0,1,2}};
	mergesort(arr,0,2);
	for(int i=0;i<3;++i)
	{
		printf("%d  ",arr[0][i]);
	}
	printf("\n");
	for(int i=0;i<3;++i)
	{
		printf("%d  ",arr[1][i]);
	}
	return 0;
}
