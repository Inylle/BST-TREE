#pragma once
#ifndef TREE_H
#define TREE_H

    class Tree {
    public:
        int data;
        Tree* left;
        Tree* right;

        Tree(int value) : data(value), left(nullptr), right(nullptr) {};
        Tree() : data(0), left(nullptr), right(nullptr) {};
        void insertNode(Tree*& root, int value);
        void printInOrder(Tree* root);
        void deleteTree(Tree* root);
        Tree* findNode(Tree* node);
        Tree* deleteNode(Tree* root, int value);
        void findPath(Tree* root, int value);
    };
#endif
