#include <iostream>
using namespace std;

int main() {
    // Your code here
    int num;
    cout<<"Enter the number of rows :- "<<endl;
    cin>>num;
    for(int row=0;row<num;row++){
        for(int col=num;col>row;col--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

// * * * * * * * * 
// * * * * * * * 
// * * * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 