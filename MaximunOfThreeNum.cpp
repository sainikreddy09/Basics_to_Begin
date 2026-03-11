#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max;
    cout<<"Enter the values of a, b, and c:";
    cin>>a>>b>>c;
    if(a>b>c)
    {
        cout<<"Max is A.";
    }
    if(b>c>a){
        cout<<"Max is B.";
    }
    if(c>a>b){
        cout<<"Max is C...";
    }
    else{
        cout<<"Error....";
    }
    
    return 0;
}