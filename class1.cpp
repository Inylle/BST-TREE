#include <iostream>
using namespace std;

// Klasa Tree

class Tree {
public:
    int data;
    Tree* left;
    Tree* right;

    // Konstruktor
    Tree(int value) : data(value), left(nullptr), right(nullptr) {}

};

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


int main() {
    
    //Tree* root = nullptr; // Inicjalizacja pustego drzewa
    //insertNode(root, 50);
    //printInOrder(root);

    return 0;
}