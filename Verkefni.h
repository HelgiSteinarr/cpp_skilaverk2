#pragma once
#include <iostream>
#include <string>

using namespace std;

class Verkefni
{
    private:
        string description;
        bool schoolWork;
        int weight;
        
    public:
        Verkefni(string desc, bool schoolWork, int weight);
        ~Verkefni();

        void printData();

        string getDesc();
        void setDesc(string desc);

        bool getSchoolWork();
        void setSchoolWork(bool schoolWork);

        int getWeight();
        void setWeight(int weight);
};
