#include "intLinkedList.h"

void intLinkedList::splitEvensOddsList(intLinkedList& evensList, intLinkedList& oddsList) {
    nodeType<int>* current = this->first;

    while (current != nullptr) {
        // Save the next node
        nodeType<int>* nextNode = current->link;

        // Check if the current node is even or odd
        if (current->info % 2 == 0) {
            evensList.insertLast(current->info);  // Insert into evens list
        }
        else {
            oddsList.insertLast(current->info);  // Insert into odds list
        }

        current = nextNode;  // Move to the next node
    }

    // Clear the original list (optional depending on project requirements)
    this->destroyList();
}