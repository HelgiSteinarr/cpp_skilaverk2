#pragma once
#include <iostream>

#include "VerkefniNode.h"

using namespace std;

class VerkefnaListi
{
    private:
        VerkefniNode* head;
    public:
        VerkefnaListi();
        ~VerkefnaListi();

        void setjaILista(Verkefni verkInst);
        void setjaILista(string desc, bool schoolWork, int weight);

        void prentaOllVerkefni();

		VerkefniNode faNaestaVerkefni();

        void prentaSkolaverkefni();
        void prentaEkkiSkolaverkefni();
};
