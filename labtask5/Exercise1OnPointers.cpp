#include <iostream>
#include <string>
using namespace std;

int main() {
    int numberOfElements = 0;
    int * dynamicArray = nullptr;
    int n; 
	char** strArray = new char*[n]; 

    cout<<"how many numbers would you like to type? ";
    cin>> numberOfElements;
    dynamicArray = new int[numberOfElements];
    if (dynamicArray == nullptr){
        cout << "error: memory could not be allocated";
    }
    else {
        for (int i = 0; i < numberOfElements; i++){
            cout<< "enter number: ";
            cin>>dynamicArray[i];
        }
        cout << "you have entered: ";
        for (int j = 0; j < numberOfElements; j++){
            cout<< dynamicArray[j]<< ", ";
        }
        cout<< endl;
        delete[] dynamicArray;
    }
	cout << "Enter the number of strings: "; 
	cin >> n; 
   for (int i = 0; i < n; i++) { 
		strArray[i] = new char[100]; 
		cout << "Enter string " << i + 1 << ": "; 
		cin >> strArray[i]; 
	} 
	cout << "\nYou entered:\n"; 
	for (int i = 0; i < n; i++) { 
		cout << "String " << i + 1 << ": " << strArray[i] 
			<< endl; 
	} 
	for (int i = 0; i < n; i++) { 
		delete[] strArray[i]; 
	} 
	delete[] strArray; 

	return 0;
}