#include "Person.h"

using namespace people;

Person:: Person(){};
Person::~Person(){};

int Person::getAge()
{
    return (age);
}

string Person::getName()
{
    return (name);
}

string Person::getAddress()
{
    return (address);
}

string Person::getGender()
{
    return (gender);
}

void Person::setGender(string g)
{
    gender = g;
}

void Person::setName(string nm)
{
    name = nm;
}

void Person::setAddress(string adr)
{
    address = adr;
}

void Person::setAge(int a)
{
    age = a;
}

void Person::printInfo()
{
    cout << endl;
    cout << "   Name: " << name << endl;
    cout << "    Age: " << age << endl;
    cout << "Address: " << address << endl;

}
