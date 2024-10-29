//#include<iostream>
//using namespace std;
//
// int main(){
// 	 
// 	  int n,a=0,b=1,c,i; 
// 	 
// 	  
// 	  cout<<"Enter The Number:";
// 	  cin>>n;
// 	  
// 	  cout<<a,b;
// 	  for(i=3;i<=n;i++){
//          cout<<c;
//		  a=b;
//		  b=c;
//		  c=a+b; 	  	
// 	  	
// 	  	
//	   }
////	   cout<<c;
// 	 
// }
#include <iostream>
using namespace std;
int main() {
    int n,a=0,b=1,c,i;

    cout<<"Enter the number:";
    cin>>n;

    cout<<"Fibonacci Series:";
    for (i=1;i<=n;++i){
        cout<<a;
        c=a+b;
        a=b;
        b=c;
    }

    
}
