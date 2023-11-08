#include <iostream>
using namespace std;
#include "class1.cpp"
//#include "class2.cpp";

class smth{

};

int main() {
    Tree* root = nullptr; // Initialize an empty tree

    while (true) {
        cout << "Program Drzewo BST" << endl;
        cout << "Wybierz opcje: " << endl;
        cout << "1. Dodaj element" << endl;
        cout << "2. Usun element" << endl;
        cout << "3. Usun cale drzewo" << endl;
        cout << "4. Szukaj drogi do podanego elementu" << endl;
        cout << "5. Wyswietl drzewo" << endl;
        cout << "6. Zapis do pliku" << endl;
        cout << "7. Odczyt z pliku" << endl;
        cout << "8. Wyjscie" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Podaj wartosc do dodania: ";
                cin >> value;
                insertNode(root, value);
                break;
            }
            case 2: {
                int value;
                cout << "Podaj wartosc do usuniecia: ";
                cin >> value;
                root = deleteNode(root, value);
                break;
            }
            case 3:
                deleteTree(root);
                root = nullptr;
                break;
            case 4: {
                int value;
                cout << "Podaj wartosc do znalezienia sciezki: ";
                cin >> value;
                findPath(root, value);
                break;
            }
            case 5:
                cout << "Drzewo BST (In Order): ";
                printInOrder(root);
                cout << endl;
                break;
            case 6: {
                // Add code for saving to a file
                break;
            }
            case 7: {
                // Add code for reading from a file
                break;
            }
            case 8:
                // Exit the program
                return 0;
            default:
                cout << "Niepoprawna opcja. Wybierz ponownie." << endl;
        }
    }
    return 0;
}