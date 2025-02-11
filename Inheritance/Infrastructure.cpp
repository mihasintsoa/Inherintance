#include "Infrastructure.h"

using namespace building;

Infrastructure:: Infrastructure(){}
Infrastructure::~Infrastructure(){}

void Infrastructure::setAddress(string a)
{
    address = a;
}

void Infrastructure::setName(string n)
{
    name = n;
}

void Infrastructure::printInfo()
{
    cout << endl;
    cout << "   Building Name: " << name << endl;
    cout << "Building Address: " << address << endl;
}

string Infrastructure::getAddress()
{
    return (address);
}

string Infrastructure::getName()
{
    return (name);
}