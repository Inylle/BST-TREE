#include "class2.h"
#include <iostream>

using namespace std;
using namespace c2;

void readfile(){
    ifstream file;
    file.open("data.txt");
    if(!file.is_open()){
        cout << "Nie można otworzyć pliku!" << endl;
    }
    else{
        cout << "Plik otwarty!" << endl;
    }
    file.close();
}


int main() {
    
    readfile();

    return 0;
}