/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Rachel Cameron
 */

#include "header.h"

int main() {
    
    int value;

    cout << "Please enter an integer value: ";
    cin >> value;

    if (value %2 == 0) {
        cout << "The integer value " << value << " is an EVEN number."; }
    else {
        cout << "The integer value " << value << " is an ODD number."; }
    return 0;

}