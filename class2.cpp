#pragma once
#include "class2.h"
#include "class1.h"
#include "class1.cpp"
#include <iostream>
#include <fstream>

using namespace std;


// read form file

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
        ifstream file;
        file.open(fileName, ios::binary);

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

