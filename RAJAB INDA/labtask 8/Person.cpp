#include "Person.h"
using namespace std;

Person::Person() : mWeight(0.0f), mFirstName(""), mAge(0) {}

Person::Person(float newWeight, const string& firstName, int age) : mWeight(newWeight), mFirstName(firstName), mAge(age) {}

Person::~Person() {}

Person::operator int() const {
    return mAge;
}

Person::operator string() const {
    return mFirstName;
}

float Person::operator+(const Person& otherPerson) const {
    return mWeight + otherPerson.mWeight;
}

bool Person::operator==(const Person& otherPerson) const {
    return mAge == otherPerson.mAge;
}

bool Person::operator!=(const Person& otherPerson) const {
    return !(*this == otherPerson);
}

bool Person::operator<(const Person& otherPerson) const {
    return mAge < otherPerson.mAge;
}

bool Person::operator>(const Person& otherPerson) const {
    return mAge > otherPerson.mAge;
}
