#include <iostream>
using namespace std;

int main() {
    //declare pointer and initialize it
    //so that it doesn't store a random address
    int* pPointer = nullptr;

    int intergervar = 5;

    //assign pointer to address of object
    pPointer = &intergervar;

    //output the value integerVar
    cout<<"integerVar: "<< intergervar<< endl;

    //output the address of integerVar
    cout<<"address of integerVar: "<< &intergervar << endl;

    //output the address assigned to pPointer
    cout<< "pPointer: "<< pPointer<< endl;

    //output the address of pPointer 
    cout << "address of pPointer: "<< &pPointer<< endl;

    return 0;
}