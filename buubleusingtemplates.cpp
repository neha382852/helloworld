#include<iostream>
#include<iomanip>
using namespace std;
template<class x>
void sort(x b[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(b[j+1]<b[j])
            {
                swap(b[j],b[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
	{
		cout<<b[i]<<"\t";
	}
}
template<class t>
void swap(t &a,t &b)
{
    t temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a[5],n,i;
    cout<<"enter size of array";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,n);
}
