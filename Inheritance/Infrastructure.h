#pragma once
#include <string>
#include <iostream>

using namespace std;

namespace building
{
    class Infrastructure
    {
        private:
            string address;
            string name;
    
        public:
             Infrastructure();
            ~Infrastructure();
    
            void setAddress(string a);
            void setName(string name);
    
            string getName();
            string getAddress();
            void printInfo();
    };
}
