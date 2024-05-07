#include <iostream>
using namespace std;

int main() {
    //null pointer
    int* pPointer = nullptr;

    int numbersArray[3] = {10, 20, 30};

    //assign address of first element to pointer 
    pPointer = numbersArray;

    //output the address of the first element 
    cout<< "address at pPointer: "<< pPointer<<endl;
    cout<< "addtress of numbersArray[0; ]"<< numbersArray << endl;

    //output the value of the first element using the pointer and indirection
    cout<< "value at pPointer: "<< *pPointer << endl;

    //this outputs the vlue of the second element 
    cout << "value at ++pPointer: " << *(++pPointer) << endl;

    //assign address of first element to pointer
    pPointer = numbersArray;

    //this outputs the values of the first element
    cout<< "value at pPointer++: "<< *(pPointer++)<< endl;

    return 0;

}