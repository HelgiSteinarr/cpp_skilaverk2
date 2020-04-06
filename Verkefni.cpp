#include "Verkefni.h"

Verkefni::Verkefni()
    : description(""), schoolWork(false), weight(0)
{
}

Verkefni::Verkefni(string desc, bool schoolWork, int weight)
{
    setDesc(desc);
    setSchoolWork(schoolWork);
    setWeight(weight);
}

Verkefni::~Verkefni()
{
    // TODO
}

void Verkefni::printData()
{
    string schoolWork = (getSchoolWork()) ? "já": "nei";
    /*string desc = getDesc();
    int weight = getWeight(); */

    cout << getDesc() << ", Skólaverkefni: " << schoolWork << ", Mikilvægi:" << getWeight() << endl;
}

string Verkefni::getDesc(){ return this->description; }
void Verkefni::setDesc(string descArg){ this->description = descArg; }

bool Verkefni::getSchoolWork(){ return this->schoolWork; }
void Verkefni::setSchoolWork(bool schoolWorkArg){ this->schoolWork = schoolWorkArg; }

int Verkefni::getWeight(){ return this->weight; }
void Verkefni::setWeight(int weightArg){ this->weight = weightArg; }

Verkefni Verkefni::first()
{
    return Verkefni();
}


// TODO: gera operator overload betur
bool Verkefni::operator<(Verkefni& other) 
{
    if(this->schoolWork){

        if(other.schoolWork){
            return this->weight < other.weight;
        }else{
            return false;
        }

    }else{
        if(other.schoolWork){
            return true;
        }else{
            return this->weight < other.weight;
        }
    }
}
bool Verkefni::operator>(Verkefni& other)
{
    if(this->schoolWork){

        if(other.schoolWork){
            return this->weight > other.weight;
        }else{
            return true;
        }

    }else{
        if(other.schoolWork){
            return false;
        }else{
            return this->weight > other.weight;
        }
    }
}
bool Verkefni::operator<=(Verkefni& other)
{
    if(this->schoolWork){

        if(other.schoolWork){
            return this->weight <= other.weight;
        }else{
            return false;
        }

    }else{
        if(other.schoolWork){
            return true;
        }else{
            return this->weight <= other.weight;
        }
    }
}
bool Verkefni::operator>=(Verkefni& other)
{
    if(this->schoolWork){

        if(other.schoolWork){
            return this->weight >= other.weight;
        }else{
            return true;
        }

    }else{
        if(other.schoolWork){
            return false;
        }else{
            return this->weight >= other.weight;
        }
    }
}