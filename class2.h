#pragma once
#ifndef BST_H
#define BST_H


    class BST {
    public:
        void readfile(Tree*& root, string fileName);
        void readfilebinary(Tree*& root, const string& fileName);
        void savefilebinary(Tree*& root, const string& fileName);
        void saveTreeToFile(Tree* root, std::ofstream& file);
    };

#endif