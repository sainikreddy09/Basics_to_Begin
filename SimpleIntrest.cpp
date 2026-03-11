#include<iostream>
using namespace std;
int main()
{
    int P,T,R,i;
    cout<<"Entre the Princle, Time, and Rate of Interst:";
    cin>>P>>T>>R;
    i = P*T*R/100;
    cout<<"The Interst amout is:"<<i<<endl;
    return 0;
}