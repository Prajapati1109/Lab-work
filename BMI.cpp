#include<iostream>

using namespace std;

    int main(){
    	
    	 float bmi,w,h;
    	 
    	 cout<<"Enter Your Height In FT:";
    	 cin>>h;
    	 
    	 h=0.305*h;
    	 cout<<"Your Height is:"<<h<<"m"<<endl;
    	 cout<<"Enter Your Weight In KG:";
    	 cin>>w;
         cout<<"Your Weight is :"<<w<<"kg"<<endl;
    	 bmi=w/(h*h);
	     cout<<"Your BMI is :"<<bmi;
	}
