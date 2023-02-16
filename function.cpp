#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,i;
	int factorial=1;
	cout<<"Enter any positive intiger =";
	cin>>n;
	
	for(i=1;i<=n;i++){
	
		factorial *= i;
	}
		
		cout<< n << "! =" << factorial<< endl;
	
	}
	
	

