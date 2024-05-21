#include "Person.h"
#include <iostream>
using namespace std;

int main() {
    Person Jane = Person(60.0f, "Jane", 25);
    Person John = Person(75.0f, "John", 30);

    if (Jane == John) {
        cout << "This is the same person" << endl;
    }

    if (Jane != John) {
        cout << "This is not the same person" << endl;
    }

    if (Jane < John) {
        cout << "Jane is younger than John" << endl;
    }

    if (Jane > John) {
        cout << "John is older than Jane" << endl;
    }

    int johnAge = John;
    cout<< "John's Age: "<<johnAge<< endl;

    string janeFirstName = Jane;
    cout << "Jane's firstName: " << janeFirstName << endl;

    float janeWeight = Jane;
    cout << "Jane's weight: " << janeWeight << endl;


    return 0;
}
