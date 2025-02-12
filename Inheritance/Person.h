#pragma once
#include <string>
#include <iostream>

using namespace std;

namespace people
{
    class Person
    {
        private:
            string name;
            string address;
            string gender;
            int age;
            //int numOfYear;
        public:
            //void setNumOfYear(int a);
            Person();
            ~Person();
            void setName(string a);
            void setAddress(string a);
            void setAge(int a);
            void setGender(string g);
    
            //void getNumOfYear();
            int getAge();
            string getName();
            string getAddress();
            string getGender();
    
            void printInfo();
    };
}
