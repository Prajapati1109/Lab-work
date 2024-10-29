#include<iostream>
using namespace std;
int a,b;
void swap(int &a , int &b){
	a=a+b;
	b=a-b;
	a=a-b;
}
int main(){
	cout<<"Enter the Value Of A : ";																	
	cin>>a;
	cout<<"========================"<<endl;
	cout<<"Enter the Value Of B : ";
	cin>>b;
	cout<<"========================"<<endl;
	cout<<"Before Swap:"<<a<<"&"<<b<<endl;
	
	cout<<"========================"<<endl;
	swap(a,b);
	cout<<"After Swap:"<<a<<"&"<<b;
}
