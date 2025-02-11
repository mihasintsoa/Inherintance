#pragma once // this will be called only once even  the Infrastructure.h is
// included multiple time within the same project
#include "Infrastructure.h"

using namespace building;

namespace building
{
    class Etablissement : public Infrastructure
    {
        int numberOfRoom;
        public:
            Etablissement();
            ~Etablissement();

            void setNumberOfRoom(int a);
            void printMoreInfo();

            int getNumberOfRoom();
    };
}
