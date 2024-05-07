#include <iostream>

using namespace std;

int main () {
int number;
bool isTrue = false;

for (int i = 0; !isTrue; ++i) {

cout <<"Enter an integer value between 5 and 10"<< endl;
cin >> number;
while (number>= 5 && number <= 10){
    cout <<"your input value (" << number <<") has been accepted";
    return 0;
}
    cout <<"Sorry, you entered invaled number, please try again";
    if (number>= 5 && number <= 10)
        isTrue = true;
    }
}