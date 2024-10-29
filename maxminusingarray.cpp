#include <iostream>
using namespace std;
int main() {
    int n;

    // Prompt user for the size of the array
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    // Declare an array of size n
    int*arr=new int[n];

    // Prompt user to enter the elements of the array
    cout<<"Enter"<<n<<"elements:"<<endl;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    // Initialize min and max with the first element
    int min=arr[0];
    int max=arr[0];

    // Iterate through the array to find min and max
    for(int i=1;i<n;i++){
        if (arr[i]<min){
            min=arr[i]; // Update min if a smaller element is found
        }
        if(arr[i]>max){
            max=arr[i]; // Update max if a larger element is found
        }
    }

    // Display the results
    cout<<"Minimum element:"<<min<<endl;
    cout << "Maximum element:"<<max<<endl;

    // Clean up dynamically allocated memory
    delete[] arr;

    return 0;
}
