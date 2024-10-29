#include<iostream>
using namespace std;

 int main(){

 	 
     int choice,qnt,p,total;

      
     cout<<"::::::::::Menu::::::::::"<<endl;
     cout<<"1.Pizza Rs 999"<<endl;
     cout<<"2.Burger Rs 159"<<endl;
     cout<<"3.Sandwich Rs 199"<<endl;
     cout<<"4.Meggie Rs 99"<<endl;
     cout<<"5.Vadapav Rs 49"<<endl;
     cout<<"6.Frankie Rs 129"<<endl;
     cout<<"7.French fries Rs 40"<<endl;                                                
     cout<<"8.Water Rs 20"<<endl;
     cout<<"select choice:";
     cin>>choice;
     
     switch(choice){
     	
     	case 1:
     		cout<<"You Selected Pizza"<<endl;
     		cout<<"Select qnt:";
     		cin>>qnt;
            total=999*qnt;
			cout<<"Your Bill is:"<<total;
		    break;
		    
		case 2:
     		cout<<"You Selected Burger"<<endl;
     		cout<<"Select qnt:";
     		cin>>qnt;
            total=159*qnt;
			cout<<"Your Bill is:"<<total;
		    break;
		    
	    case 3:
      		cout<<"You Selected Sandwich"<<endl;
     		cout<<"Select qnt:";
     		cin>>qnt;
            total=199*qnt;
			cout<<"Your Bill is:"<<total;
		    break;
		    
	    case 4:
      		cout<<"You Selected Vadapav"<<endl;
     		cout<<"Select qnt:";
     		cin>>qnt;
            total=99*qnt;
			cout<<"Your Bill is:"<<total;
		    break;
		    
	    case 5:
      		cout<<"You Selected Meggie"<<endl;
     		cout<<"Select qnt:";
     		cin>>qnt;
            total=49*qnt;
			cout<<"Your Bill is:"<<total;
		    break;
		    
	    case 6:
      		cout<<"You Selected Frankie"<<endl;
     		cout<<"Select qnt:";
     		cin>>qnt;
            total=129*qnt;
			cout<<"Your Bill is:"<<total;
		    break;
		
		
		case 7:
      		cout<<"You Selected French fries"<<endl;
     		cout<<"Select qnt:";
     		cin>>qnt;
            total=40*qnt;
			cout<<"Your Bill is:"<<total;
		    break;
		    
		case 8:
      		cout<<"You Selected Water"<<endl;
     		cout<<"Select qnt:";
     		cin>>qnt;
            total=20*qnt;
			cout<<"Your Bill is:"<<total;
		    break;
		
		
	 }
     
     
	      
 }
