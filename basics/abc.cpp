#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	double a,b,c;
	cin>>a>>b>>c;
	double dis, root1,root2,img,real;
	dis=sqrt(pow(b,2)-(4*a*c));
	if(dis==0)
	{
		root1= -(b)/(2*a);
		cout<<"only root: "<<root1<<endl;
	}
	else if(dis>0)
	{
		root1= (-b+dis)/(2*a);
		root2= (-b-dis)/(2*a);
		cout<<"root1: "<<root1<<endl;
		cout<<"root2: "<<root2<<endl;
	}
	else
	{
		img= sqrt(-1*(b*b-4*a*c))/(2*a);
		real= -b/(2*a);
		cout<<"root 1:"<<real<<" +i"<<img<<endl;
		cout<<"root 2:"<<real<<" -i"<<img<<endl;
	}


   
   return 0;
}
