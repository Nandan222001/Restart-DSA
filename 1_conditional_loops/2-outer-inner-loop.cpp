#include<iostream>
using namespace std;

int main() {
    for(int i=0;i<3;i++) {
        cout << "This is outer Loop :- "<<i<< endl;
        for(int j=0;j<3;j++) {
            cout << "This is inner loop :- "<<j<< endl; 
        }
    }
}