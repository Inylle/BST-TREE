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

int main() {
    
    //Tree* root = nullptr; // Inicjalizacja pustego drzewa
    //insertNode(root, 50);
    //printInOrder(root);
    //deleteTree(root);
    
    return 0;
}