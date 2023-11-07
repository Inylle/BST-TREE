#include "class1.h"
#include <iostream>

using namespace std;
using namespace c1;

    // Dodawanie elementu do drzewa BST
    void insertNode(Tree*& root, int value) {
        if (root == nullptr) {
            root = new Tree(value);
        } else {
            if (value < root->data) {
                insertNode(root->left, value);
            } else if (value >= root->data) {
                insertNode(root->right, value);
            }
        }
    }

    // Wyświetlenie drzewa BST przy użyciu InOrder
    void printInOrder(Tree* root) {
    if (root == nullptr) {
        return;
    }

    // Najpierw wypisz lewe poddrzewo
    printInOrder(root->left);

    // Następnie wypisz wartość bieżącego węzła
    cout << root->data << " ";

    // Na koniec wypisz prawe poddrzewo
    printInOrder(root->right);
    }


    // Usuwanie drzewa BST przy użyciu deleteTree || Problem z dodawaniem elementu po usunięciu drzewa
    void deleteTree(Tree* root) {
    if (root == nullptr) {
        return;
    }

    // Najpierw usuń lewe poddrzewo
    deleteTree(root->left);

    // Następnie usuń prawe poddrzewo
    deleteTree(root->right);

    // Ustawienie węzła na pusty
    delete root;
    root = nullptr;   
    }

    // Znajdowanie najmniejszego z potomków usuwanego węzła | Potrzebne do metody deleteNode
    Tree* findNode(Tree* node) {
        while (node->left != nullptr) {
           node = node->left;
        }
        return node;
        }

    // Usuwanie elementu drzewa BST po wartości
    Tree* deleteNode(Tree* root, int value) {
        if (root == nullptr) {
            return root;
        }
        if (value < root->data) {
            root->left = deleteNode(root->left, value);
        } else if (value > root->data) {
            root->right = deleteNode(root->right, value);
        } else {

        // Przypadek 1: Węzeł ma co najwyżej jedno dziecko
        if (root->left == nullptr) {
            Tree* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Tree* temp = root->left;
            delete root;
            return temp;
        }

        // Przypadek 2: Węzeł ma dwoje dzieci
        Tree* temp = findNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;      
    }  

    // szukanie drogi do elementu
    void findPath(Tree* root, int value) {
        if (root == nullptr) {
            return;
        }
        if (value < root->data) {
            cout << root->data << " ";
            findPath(root->left, value);
        } else if (value > root->data) {
            cout << root->data << " ";
            findPath(root->right, value);
        } else {
            cout << root->data << " ";
        }
    }

    

int main() {

    /*
    
    Tree* root = nullptr; // Inicjalizacja pustego drzewa
    insertNode(root, 50);
    insertNode(root, 15);
    insertNode(root, 20);
    printInOrder(root);
    deleteTree(root);
    deleteNode(root, 15);
    printInOrder(root);
    findPath(root, 20);

    */
    
    return 0;
}