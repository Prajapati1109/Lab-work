#include<iostream>
using namespace std; 
 int current_balance=50000,cd,wb;
void opn_acc(){
	string first_name,last_name;
    long long  mob_no,acc_no;
	cout<<"Enter Your Account No. :";
	cin>>acc_no;
	cout<<"Enter Your First Name :";
	cin>>first_name;
	cout<<"Enter Your Last Name :";
	cin>>last_name;
	cout<<"Enter Your Mobile No. :";
	cin>>mob_no;
	cout<<endl;
	cout<<"Your Account No Is :"<<acc_no <<endl;
	cout<<"Your First Name Is :"<<first_name <<endl;
	cout<<"Your Last Name Is :"<<last_name <<endl;
	cout<<"Your Mobile No Is :"<<mob_no <<endl;	
}
void balance(){

    cout<<"Your Current Balance is:"<<current_balance<<endl;
	    
}

void deposit(){
	int dm;
	cout<<"How Many Money You Like to Deposite:";
	cin>>dm;
	cd=dm+current_balance;
	cout<<"Your Balance is Now:"<<cd<<endl;
}

void withdraw(){
	int wd;
   cout<<"How Many Money You Like to Withdraw:";
   cin>>wd;
   wb=current_balance-wd;
   if(wd<=current_balance){
   cout<<"Your Balance is Now:"<<wb<<endl;
   }
   else{
   	cout<<"Sorry,You Have Only:"<<current_balance<<endl;
   }
   
}

void transaction(){
       int de1,de2,amtwith1,amtwith2,accno;
	   cout<<"Your Account:"<<accno<<"bank balance is="<<current_balance<<endl;
	   cout<<"Enter Deposit Amount:";
	   cin>>de1;
	   if(de1>0){
	   	de2=current_balance+de1;
	   	cout<<"Transaction History of deposit amount is:"<<de1<<endl;
	   	cout<<"After deposit bank Balance is:"<<de2<<endl;
	   }
	   else{
	   	cout<<"Transaction is none"<<endl;
	   }
	   cout<<"Enter Withdrawl Amount:";
	   cin>>amtwith1;
	   
	   if(amtwith1>0){
	   	amtwith2=de2-amtwith1;
	   	cout<<"Transaction History Of Deposit amount is:"<<amtwith1<<endl;
	   	cout<<"After Withdrawl bank balance is:"<<amtwith2<<endl;
	   }             
	   else{
	   	cout<<"Transaction is none"<<endl;
	   }
	   
	   

}

void modify_acc(){
	string firstname,lastname;
	long long  acc_no,mobno;
    
  cout<<"Enter Account Number:";
  cin>>acc_no;
  cout<<"Enter A New Details"<<endl;
  cout<<"ENTER Your First Name :";
  cin>>firstname;
  cout<<"Enter Your Last Name :";
  cin>>lastname;
  cout<<"Enter Your Mobile No :";
  cin>>mobno;
    cout<<"Your First Name is :"<<firstname <<endl;
	cout<<"Your Last Name Is:"<<lastname <<endl;
	cout<<"Your Mobile No Is:"<<mobno <<endl;
  
}

void menu(){
	int choice;
	cout<<"========Bank System========"<<endl;
	cout<<"Select Your Choice"<<endl;
	cout<<"1. Open Account"<<endl;
	cout<<"2. Balance "<<endl;
	cout<<"3. Deposit"<<endl;
	cout<<"4. Withdraw"<<endl;
	cout<<"5. Transaction"<<endl;
	cout<<"6. Modify Account"<<endl;
	cout<<"7. EXIT"<<endl;
	cout<<"Enter Your Choice :";
	cin>>choice;
	
	switch(choice){
		case 1:
			opn_acc();
		break;
		
		case 2:
			balance();
		break;
		
		case 3:
			deposit();
		break;
		
		case 4:
			withdraw();
		break;
		
		case 5:
			transaction();
		break;
		
		case 6:
			modify_acc();
		break;
		
	    default :
		    cout<<"Thank You............"<<endl;
	    break;
	}
	  char repeat;
        cout<<"You Like to Do any Other Process? [y for yes || n for no]):";
        cin>>repeat;
        if(repeat=='y'||repeat=='Y'){
            menu();
		}
		else{
			cout<<"Thank you......";
		}
}
int main(){
	menu();

}
