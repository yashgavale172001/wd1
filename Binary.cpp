#include<iostream>

	using namespace std;

int main()
{
int a[10],number,i,j,n,higher,lower=0,middle,flag=0;
	cout<<"Enter the size of array";
		cin>>n;
	cout<<"Enter the element";
for(i=0;i<n;i++)
{
	cin>>a[i];
	}
	cout<<"Enter the no you want to search";
		cin>>number;
		higher= n-1;
while(lower<=higher)
{
		middle=lower+higher/2;
if(number==middle)
{
		flag=1;
	}
else(number>=middle);
	{
		higher=middle-1;
}
if(lower=middle+1);

	
}
if(flag=1){
	cout<<"Number found";
}
else
{
	cout<<"Number not found";
	}
}
