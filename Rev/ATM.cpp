#include<iostream>
using namespace std;

 int main(){
 	long long mno,acno,pin;
 	string fn,ln;
 	
 	cout<<"Enter Your Account Number";
 	cin>>acno;
 	cout<<"Enter Your First Name:";
 	cin>>fn;
 	cout<<"Enter Your Last Name:";
 	cin>>ln;
 	cout<<"Enter Your Mobile Number:";
 	cin>>mno;
 	cout<<"Creat ATM Pin:";
 	cin>>pin;
 	
 	cout<<"Your Account Is Created"<<endl;
 	
 	cout<<"Login"<<endl;
 	
 	int acn1,pin1;
 	
 	cout<<"Enter Account Number:";
 	cin>>acn1;
 	cout<<"Enter ATM Pin:";
 	cin>>pin1;
 	if(acn1==acno && pin1==pin){
 		cout<<"Your First Name is:"<<fn<<endl;
 		cout<<"Your last Name is:"<<ln<<endl;
 		cout<<"Your Mobile Number is:"<<mno<<endl;
 	
	 }
	 else{
	 	cout<<"faild";
	 }
 	
 	
 
 	
 }
