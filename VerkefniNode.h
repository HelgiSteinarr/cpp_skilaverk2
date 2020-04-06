#pragma once

#include "Verkefni.h"

struct VerkefniNode
{
    Verkefni data;
    VerkefniNode* next;

    VerkefniNode(string desc, bool schoolWork, int weight)
    {
        this->data = Verkefni(desc, schoolWork, weight);
        this->next = nullptr;
    }
	void prenta()
	{
		this->data.printData();
	}
};


