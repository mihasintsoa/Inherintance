#pragma once // this will be called only once even  the Person.h is
// included multiple time within the same project
#include "Person.h"
using namespace people;

namespace people
{
    class Etudiant : public Person
    {
        private:
            int numOfYear;
        public:
            int getNumOfYear();
    
            void setNumOfYear(int a);
            void printMoreInfo();
    
    };
}
