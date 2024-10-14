#ifndef H_IntLinkedList
#define H_IntLinkedList

#include "unorderedLinkedList.h"

class intLinkedList : public unorderedLinkedList<int> {
public:
    // Function to split the list into evens and odds
    void splitEvensOddsList(intLinkedList& evensList, intLinkedList& oddsList);
};

#endif