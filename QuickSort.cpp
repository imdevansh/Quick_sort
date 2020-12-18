//Quicl Sort
#include<iostream>
void QuickSort(int [],int,int);
int partition(int[],int,int);
using namespace std;
int main()
{
	int n;
	cout<<"enter n  ";
	cin>>n;
	int a[n];
	cout<<"enter elements to array in unsorted form";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	QuickSort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}

void QuickSort(int a[],int beg,int end)
{
	if(beg<end)
	{
		int loc=partition(a,beg,end);
		QuickSort(a,beg,loc-1);
		QuickSort(a,loc+1,beg);
	}
	
}

int partition(int a[],int beg,int end)
{
	int loc=beg;
	int left=beg;
	int right=end;
	while(beg<=end)
	{
	
	//right scan
	while(a[right]>a[loc] && right!=loc)
	{
		right--;
	}
	if(loc==right)
	{
		return loc;
	}
	
	else if(a[right]<a[loc])
	{
		int temp=a[right];
		a[right]=a[loc];
		a[loc]=temp;	
		loc=right;
		
		return loc;
	}
	
	
	//left scan
	
	while(a[left]<a[loc] && left!=loc)
	{
		left++;
	}
	if(loc==left)
	{
		return loc;
	}
	
	else if(a[left]>a[loc])
	{
		int temp=a[left];
		a[left]=a[loc];
		a[loc]=temp;	
		loc=left;
		
		return loc;
	}
	
}}
