#include <iostream>
using namespace std;

int main() {
    int ROWS, COLS;

    cout << "Enter the number of rows: ";
    cin >> ROWS;

    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col <= row; col++) {
            cout <<col+1<<" ";
        }
        cout << endl;
    }
    return 0;
}


// Enter the number of rows: 8
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 8 