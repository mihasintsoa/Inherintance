#include "Etablissement.h"

using namespace building;

Etablissement:: Etablissement(){}
Etablissement::~Etablissement(){}

void Etablissement::setNumberOfRoom(int n)
{
    numberOfRoom = n;
}

void Etablissement::printMoreInfo()
{
    cout << "  Have: " << numberOfRoom << "room" << endl;
}

int Etablissement::getNumberOfRoom()
{
    return (numberOfRoom);
}