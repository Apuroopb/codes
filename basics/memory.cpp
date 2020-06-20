#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the size of the array:"<<endl;
    cin>>num;
    int *a;
    a= new int[num];
    for(int i=0;i<num;i++)
    cin>>*(a+i);
    for (int i=0;i<num;i++)
    cout<<*(a+i)<<" ";
    delete [] a;
}