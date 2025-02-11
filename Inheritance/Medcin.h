#pragma once // this will be called only once even  the Person.h is
// included multiple time within the same project
#include "Person.h"

using namespace people;

namespace people
{
    class Medcin : public Person
    {
        private:
            string specializeIn;  // specialize in ORL, OPHATALMOLOGIE, ...
        public:
             Medcin();
            ~Medcin();
    
            void setSpecialisation(string a);
            void printMoreInfo();
        
            string getSpecialisation();
    };
}
