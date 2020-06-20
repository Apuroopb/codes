#include <iostream>
using namespace std;
void swap(int*, int *);
int main()
{
    int a=5;
    int *p = &a;
    cout<<"value of a:"<<a<<endl;
    cout<<"memory value:"<<p<<endl;
    cout<<"value of a:"<<*p<<endl;
    cout<<"############################################################"<<endl;

    int b[3];
    int *bp;
    bp=&b[0];
    for(int i=0;i<4;i++)
    {
        cout<<&b[i]<<endl;
    }
    cout<<"#########################"<<endl;
    for (int j=0;j<4;j++)
    {
        cout<<bp+j<<endl;
    }
    
    float arr[5];
    cout<<"Displaying address using pointers notation: "<< endl;
    for (int i = 0; i < 5; ++i) {
        cout << arr + i <<endl;
    }
    /* int arr1[3];
    for(int i=0;i<3;i++)
    cin>>*(arr1+i);
    for(int i=0;i<3;i++)
    cout<<*(arr1+i)<<endl; */
    int m=6,n=7;
    swap(&m,&n);
    cout<<m<<":"<<n<<endl;
}
void swap(int *a, int *b)
{
    int z;
    z=*a;
    *a=*b;
    *b=z;
}