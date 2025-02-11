#include "Enseignant.h"

using namespace people;

Enseignant:: Enseignant(){}
Enseignant::~Enseignant(){}

void Enseignant::setCourse(string a)
{
    teacherOf = a;
}

void Enseignant::printMoreInfo()
{
    cout << "  Teach: " << teacherOf << endl;
}

string Enseignant::getCourse()
{
    return (teacherOf);
}