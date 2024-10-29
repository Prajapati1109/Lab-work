#include<iostream>
using namespace std;

int main(){
	
	  int num,n,rem,sum;
	  
	  cout<<"Enter The Number:";
	  cin>>num;
	  
	  n=num;
	  
	  while(num!=0){
	  	   rem=num%10;
	  	   sum=sum+(rem*rem*rem);
	  	   num=num/10;
	   
	  }
	  
	  if(n==sum){
	  	cout<<"The Number Is Amstrong";
	  	
	  }
	 else{
	 	cout<<"The Number Is Not Amstrong";
	 }
	  
}
