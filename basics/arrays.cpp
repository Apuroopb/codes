#include<iostream>
using namespace std;
void display(int a[][3]);
int main()
{
    int a[4]= {3,4,5,6};
    int b[] = {4,5};
    cout<<a[3];
    cin>>a[4];
    cout<<a[4]<<endl;
    int n,m;

    int multi[][3] ={{1,2,3},{4,5,6}};
    display(multi);


}

void display(int a1[][3])
{
 for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"multi["<<i<<"]["<<j<<"]="<<a1[i][j]<<endl;
        }
    }
}