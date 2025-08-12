#include <iostream>
using namespace std;

int main() {
    int ROWS, COLS;

    cout << "Enter the number of rows: ";
    cin >> ROWS;

    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
