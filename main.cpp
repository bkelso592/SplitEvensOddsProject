#include <iostream>
#include "intLinkedList.h"

using namespace std;

int main() {
    intLinkedList list, evensList, oddsList;
    int num;

    // Input integers from the user
    cout << "Enter integers (end input with -999): ";
    cin >> num;

    while (num != -999) {
        list.insertLast(num);  // Add each number to the list
        cin >> num;
    }

    // Split the list into evens and odds
    list.splitEvensOddsList(evensList, oddsList);

    // Output the original, even, and odd lists
    cout << "Evens: ";
    evensList.print();
    cout << endl;

    cout << "Odds: ";
    oddsList.print();
    cout << endl;

    return 0;
}