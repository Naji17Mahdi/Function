#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int f ( int a , int b , int c )
{
	int k;
	k = 2*a+3*(b+c);
	return k;
}
main()
{
	int x , y , z ;
	
	cout<<"Please enter a:"<<endl;
	cin>>x;
	
	cout<<"Please enter b:"<<endl;
	cin>>y;
	
	cout<<"Please enter c:"<<endl;
	cin>>z;
	
	cout<<f(x,y,z);	
}
