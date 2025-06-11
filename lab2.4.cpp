#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a < b) {
        cout << "a кіші b-дан";
    } else if (a == b) {
        cout << "a тең b-ға";
    } else {
        cout << "a үлкен b-дан";
    }
    return 0;
}
