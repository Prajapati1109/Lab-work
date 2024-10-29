#include<iostream>

using namespace std;

class Car{
	public:
	string name;
	string model;
	
	int  year;
     Car(string a,string b,int c);
   };
    Car::Car(string a,string b,int c){
    	name=a;
    	model=b;
    	year=c;
}
 int main(){
 	     Car obj("Alto","800",2000);
 	     cout<<obj.name<<endl;
 	     cout<<obj.model<<endl;
 	     cout<<obj.year<<endl;
 	
 }
