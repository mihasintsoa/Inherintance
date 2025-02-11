#pragma once // this will be called only once even  the Person.h is
// included multiple time within the same project
#include "Person.h"

using namespace people;

namespace people
{
    class Enseignant : public Person
    {
        private:
            string teacherOf;

        public:
            Enseignant();
            ~Enseignant();
            void setCourse(string a);

            void printMoreInfo();

            string getCourse();
    };
}
