#include <iostream>
using namespace std;
int sum(int , int );
double sum( double  , double );
int main()
{
	cout<<"About to execute" <<endl;
	int sum1=sum(5,3);
	cout<<"sum1:"<<sum1<<endl;
	double sum2=sum(9.3,8.1);
	cout<<"sum2:"<<sum2<<endl;
}
int sum(int a , int b)
{
	return a+b;
}
double sum(double a, double b)
{
	return a+b;
}