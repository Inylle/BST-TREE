#pragma once
#include "class2.h"
#include "class1.h"
#include "class1.cpp"
#include <iostream>
#include <fstream>

using namespace std;


// Odczytanie z pliku tekstowego

void readfile(Tree*& root, string fileName) {
    ifstream file;
    file.open(fileName);

    if (!file.is_open()) {
        cout << "Nie udalo sie otworzyc pliku!" << endl;
        return;
    }

    int value;
    while (file >> value) {
        insertNode(root, value);
    }
    printInOrder(root);
    file.close();
}

void readfilebinary(Tree*& root, string fileName){
    // Task for Jaciesune | Get to it!
}