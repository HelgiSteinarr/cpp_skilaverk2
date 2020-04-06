#include "VerkefnaListi.h"

VerkefnaListi::VerkefnaListi()
{
    this->head = nullptr;
}
VerkefnaListi::~VerkefnaListi()
{ 
    VerkefniNode* newHead;
    while(this->head)
    {
        newHead = this->head->next;
        delete this->head;
        this->head = newHead;
    }
}

void VerkefnaListi::setjaILista(Verkefni verkInst)
{
    this->setjaILista(verkInst.getDesc(), verkInst.getSchoolWork(), verkInst.getWeight());
}
void VerkefnaListi::setjaILista(string desc, bool schoolWork, int weight)
{
    if(this->head == nullptr){
        this->head = new VerkefniNode(desc, schoolWork, weight);
    }else{
        VerkefniNode* newNode = new VerkefniNode(desc, schoolWork, weight);
        if(newNode->data >= this->head->data)
        {
            newNode->next = this->head;
            this->head = newNode;
        }else{
            VerkefniNode* current = this->head;
            VerkefniNode* prev = this->head;
            while(current && current->data >= newNode->data){
                prev = current;
                current = current->next;
            }
            prev->next = newNode;
            newNode->next = current;
        }
    }
}

void VerkefnaListi::prentaOllVerkefni()
{
    VerkefniNode* current = this->head;
    while(current){
        current->data.printData();
        current = current->next;
    }
}

VerkefniNode VerkefnaListi::faNaestaVerkefni()
{
    VerkefniNode* newHead = this->head->next;
	VerkefniNode current = *head;
    delete this->head;
    this->head = newHead;
	cout << "Eyddi:" << endl;
	return current;

}

void VerkefnaListi::prentaSkolaverkefni()
{
    VerkefniNode* current = this->head;
    while(current->data.getSchoolWork()){
        current->data.printData();
        current = current->next;
    }
}
void VerkefnaListi::prentaEkkiSkolaverkefni()
{
    VerkefniNode* current = this->head;
    while (current)
    {
        if(!current->data.getSchoolWork())
        {
            current->data.printData();
        }
		current = current->next;
    }
    
}
