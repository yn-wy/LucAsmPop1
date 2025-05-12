#include <iostream>

using namespace std;

int main() {
    int marks = 40;

    if (marks >= 80) {
        cout << "Excellent\n";
    }
    else if (marks > 49) {
        cout << "Good\n";
    }
    else {
        cout << "Needs improvement\n";
    }
}
