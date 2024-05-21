#pragma once

#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(float newWeight, const string& firstName, int age);

    ~Person();

    float operator+(const Person& otherPerson) const;
    bool operator==(const Person& otherPerson) const;
    bool operator!=(const Person& otherPerson) const;
    bool operator<(const Person& otherPerson) const;
    bool operator>(const Person& otherPerson) const;
    operator int() const; // Conversion to int
    operator string() const; // Conversion to string

private:
    float mWeight;
    string mFirstName;
    int mAge;
};
