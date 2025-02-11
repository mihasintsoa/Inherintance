#include "Medcin.h"

using namespace people;

Medcin:: Medcin(){}
Medcin::~Medcin(){}

string Medcin::getSpecialisation()
{
    return (specializeIn);
}

void Medcin::setSpecialisation(string spe)
{
    specializeIn = spe;
}

void Medcin::printMoreInfo()
{
    cout << "Doctor in:"<< specializeIn << endl;
}
