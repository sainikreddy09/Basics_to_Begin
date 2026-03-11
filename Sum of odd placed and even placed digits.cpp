#include<iostream>
using namespace std;
int main()
{
	int n;
	int even_sum = 0, odd_sum = 0;
	cin>>n;
	int count = 1;
	while(n>0)
	{
		int digit = n%10;
		if(count%2 == 1)
		{
			odd_sum += digit;
		}
		else
		{
			even_sum += digit;
		}
		n/=10;
		count++;
	}
	cout<<odd_sum<<"\n"<<even_sum;
	return 0;
}
