#include<iostream>
using namespace std;
int main() {
	int n,count = 1;
	cin>>n;
	for(int i=n;i>=0;i--)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<count++<<"\t";
		}
		cout<<"\n";
	}
	return 0;
}
