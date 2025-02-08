#include <iostream>
using namespace std;
int main(){
int size_of_arr;
cout << "enter array size";
cin >> size_of_arr;

int arr[size_of_arr];  // taking input from user 
cout<<"enter the elements"<<size_of_arr;
for (int i = 0; i<size_of_arr; i++){
    cin >> arr[i];
}

cout << "reverse of this array is"; //reverse of array 
for (int i = size_of_arr-1;i>=0;i--){
    cout<<arr[i]<< " ";
}
cout<<endl;

int largest = arr[0];
int secondlargest = -1;
for (int i =1 ;i <size_of_arr; i++ ){
    if (arr[i]> largest) {
        secondlargest = largest;
        largest = arr[i];
        } 
        else if (arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i];
        }
}
    if (secondlargest == -1) {
        cout << "No second largest element found." << endl;
    } else {
        cout << "Second largest element: " << secondlargest << endl;
    }


    int smallest = arr[0];
    int secondsmallest = -1;
    for (int i = 1; i < size_of_arr; i++){
        if (arr[i] < smallest) {
            secondsmallest = smallest;
            smallest = arr[i];
        } 
        else if ((arr[i] < secondsmallest || secondsmallest == -1) && arr[i] != smallest) {
            secondsmallest = arr[i];
        }
    }
    if (secondsmallest == -1) {
        cout << "No second smallest element found." << endl;
    } else {
        cout << "Second smallest element: " << secondsmallest << endl;
    }
    return 0;
}