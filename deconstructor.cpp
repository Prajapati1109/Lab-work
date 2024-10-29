#include<iostream>

using namespace std;

class one{
	public:
		 one(){
		 	cout<<"cons"<<endl;
		 }
		 ~one(){
		 	cout<<"decs";
		 }
};

int main(){
	one obkj;
}
