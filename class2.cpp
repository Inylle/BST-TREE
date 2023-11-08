#pragma once
#include "class2.h"
#include "class1.h"
#include "class1.cpp"
#include <iostream>
#include <fstream>
#include <stdio.h>

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

    void readfilebinary(Tree*& root, const string& fileName){
        std::ifstream file(fileName, std::ios::binary);

    if (!file.is_open()) {
        std::cout << "Nie udało się otworzyć pliku!" << std::endl;
        return;
    }

    int value;
    while (file.read(reinterpret_cast<char*>(&value), sizeof(int))) {
        insertNode(root, value);
    }
    file.close();  // Zamknij plik po zakończeniu odczytu
    std::cout << "Drzewo BST (In Order): ";
    printInOrder(root);
    std::cout << std::endl;
}


    void readfilebinary(Tree*& root, const string& fileName){
        std::ifstream file(fileName, std::ios::binary);

    if (!file.is_open()) {
        std::cout << "Nie udało się otworzyć pliku!" << std::endl;
        return;
    }

    int value;
    while (file.read(reinterpret_cast<char*>(&value), sizeof(int))) {
        insertNode(root, value);
    }
    file.close();  // Zamknij plik po zakończeniu odczytu
    std::cout << "Drzewo BST (In Order): ";
    printInOrder(root);
    std::cout << std::endl;
}