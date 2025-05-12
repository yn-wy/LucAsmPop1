#include <iostream>

using namespace std;

void displayMessage() {
    cout << "Bonjour, bienvenue a LUC!\n";
}

int main() {
    cout << "Welcome messages\n";
    cout << "In english: Hello, welcome to LUC!\n";
    cout << "In french: ";
    displayMessage();
}
