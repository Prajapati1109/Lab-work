#include<iostream>
using namespace std;
int main(){
 	
 	 try{
 	 	int n;
 	 	cout<<"Enter Your Num:";
 	 	cin>>n;
 	 	
 	 	if(n>0){
 	 		cout<<"Positive";
		  }
		  else if(n==0){
		  	cout<<"The Number Is Zero";
		  }
		  else{
		  	throw(n);
		  }
	  }
	  catch(int num){
	  	
	  	cout<<"Negative"<<endl;
	  	cout<<"Number:"<<num;
	  }
}
