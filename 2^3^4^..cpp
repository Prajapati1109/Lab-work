#include<iostream>
using namespace std;
int n,ans,choice;
void square(){
	ans=n*n;
	cout<<endl;
	cout<<"Your Ans is :"<<ans;
}
void cube(){
	ans=n*n*n;
	cout<<endl;
	cout<<"Your Ans is :"<<ans;
}
void upar4(){
	ans=n*n*n*n;
	cout<<endl;
	cout<<"Your Ans is :"<<ans;
}
int main(){
	cout<<"Enter the Number:";
	cin>>n;
	cout<<endl;
	cout<<"What do you want with this Number? "<<endl<<endl;
	cout<<"1.Squaer"<<endl;
	cout<<"2.Cube"<<endl;
	cout<<"3.^4"<<endl<<endl;
	cout<<"Enter Your Choice :";
	cin>>choice;
	switch(choice){
		case 1:
			square();
			break;
		case 2:
			cube();
			break;
		case 3:
			upar4();
			break;
	}
}
