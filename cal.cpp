#include<iostream>
using namespace std;

int main() {
    int n1,n2;
   char choice;
   

    cout<<"+ Addition"<<endl;
    cout<<"- Subtraction"<<endl;
    cout<<"* Multiplication"<<endl;
    cout<<"/ Division"<<endl;
    cout<<"Enter your choice: ";
    
    cin>>choice;

    cout<<"Enter First numbers:";
    cin>>n1;
    cout<<"Enter Second numbers:";
    cin>>n2;

    switch(choice){
        case '+':
            cout<<"Result:"<<n1+n2<<endl;
            break;
        case '-':
            cout<<"Result:"<<n1-n2<<endl;
            break;
        case '*':
            cout<<"Result:"<<n1*n2<<endl;
            break;
        case '/':
            cout<<"Result:"<<n1/n2<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }

   
}
