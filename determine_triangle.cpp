#include<iostream>
#include<vector>
using namespace std;

int main(){
    short a;
    short b;
    short c;
    cout << "Length for side a: ";
    cin >> a;
    cout << "Length for side b: ";
    cin >> b;
    cout << "Length for side c: ";
    cin >> c;

    if (a==b && b == c){
        cout << "Equilateral triangle";
    } else{
        if(a != b && a != c && b != c){
            cout << "Scalene triangle";
        } else{
            cout << "Isoceles triangle";
        }
    }
}