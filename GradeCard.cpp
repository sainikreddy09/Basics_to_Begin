#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter the Marks of the students:";
    cin>>marks;
    if(marks>90 && marks<71)
    {
        cout<<"Grade is A";
    }
    if(marks>70 && marks<60)
    {
        cout<<"Grade is B";
    }
    if(marks>60 && marks>50)
    {
        cout<<"Grade is C";
    }
    else{
        cout<<"Fail";
    } return 0;
}