#include<iostream>
using namespace std;

int main(){
	
	double p,t,r,formula,A;
	
	cout<<"Enter the P:";
	cin>>p;
	
	cout<<"Enter the t:";
	cin>>t;
	
	cout<<"Enter the r:";
	cin>>r;
	
    A=p*((pow((1+r/100),t)))
    
    cout<<"Compound Intrest is:"<<A;
}
