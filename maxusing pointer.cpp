#include<iostream>
using namespace std;

 int main(){
 	
 	int n1,n2;
 	
 	cout<<"Enter The Number 1:";
 	cin>>n1;
 	
 	cout<<"Enter The Number 2:";
 	cin>>n2;
 	
 	int *ptr1=&n1;
 	int *ptr2=&n2;
 	
 	if(n1>n2){
 		cout<<*ptr1<<"Is Max";
	 }
	 else{
	 	cout<<*ptr2<<" Is Max";
	 }
 	
 }
