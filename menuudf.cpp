#include<iostream>
using namespace std;
int grandtotal;
void burger(){
      int qut,total;
      int prize=199;
      cout<<"Enter The Quantity of burger:";
      cin>>qut;
      total=qut*prize;
      cout<<"The Total Is:"<<total<<endl;
      grandtotal += total;
}

void pizza(){
      int qut,total;
      int prize=299;
     cout<<"Enter The Quantity of pizza:";
      cin>>qut;
      total=qut*prize;
      cout<<"The Total Is:"<<total<<endl;
      grandtotal += total;
}
void frankie(){
      int qut,total;
      int prize=159;
      cout<<"Enter The Quantity of Frankie:";
      cin>>qut;
      total=qut*prize;
      cout<<"The Total Is:"<<total<<endl;
      grandtotal += total;
}

void pasta(){
      int qut,total;
      int prize=99;
      cout<<"Enter The Quantity of pasta:";
      cin>>qut;
      total=qut*prize;
      cout<<"The Total Is:"<<total<<endl;
      grandtotal += total;
}
void menu(){
int choice;

     cout<<"::::::::::Menu::::::::::"<<endl;
           cout<<"1.Burger Rs 199"<<endl;                         
           cout<<"2.Pizza Rs 259"<<endl;
           cout<<"3.Frankie Rs 159"<<endl;
           cout<<"4.Pasta Rs 99"<<endl;
           cout<<"Enter Your Choice:"<<endl;
           cin>>choice;
switch(choice){
	
	case 1:
		cout<<"Your Choice Is burger"<<endl;
		burger();
		break;
	case 2:
		cout<<"Your Choice Is pizza"<<endl;
		pizza();
		break;
	case 3:
		cout<<"Your Choice Is Frankie"<<endl;
		frankie();
		break;
    case 4:
		cout<<"Your Choice Is Pasta"<<endl;
		pasta();
		break;
		
}
   char repeat;
        cout<<"You Need Anything Else? [y for yes || n for no]):";
        cin>>repeat;
        if(repeat=='y'||repeat=='Y'){
            menu();
		}
		else{
			cout<<"your bill is:"<<grandtotal;
		}

}
int main(){
	menu();
}

