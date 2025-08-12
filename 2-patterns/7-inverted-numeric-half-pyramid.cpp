#include <iostream>
using namespace std;

int main() {
    // Your code here
    int num;
    cout<<"Enter the number of rows :- "<<endl;
    cin>>num;
    for(int row=0;row<num;row++){
        for(int col=0;col<num-row;col++){
            cout<<col+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// Enter the number of rows :- 8
// 1 2 3 4 5 6 7 8 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 
// 1 2 3 4 5 
// 1 2 3 4  
// 1 2 3 
// 1 2 
// 1 