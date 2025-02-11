#include "Etudiant.h"


using namespace people;

Etudiant:: Etudiant(){}
Etudiant::~Etudiant(){}

void Etudiant::setNumOfYear(int a)
{
    numOfYear = a;
} 

void Etudiant::printMoreInfo()
{
    cout << "   Year: " << numOfYear << endl;
}

int Etudiant::getNumOfYear()
{
    return (numOfYear);
}