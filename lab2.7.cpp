#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    if (str[0] == 'B') {
        cout << "First character is B";
    } else {
        cout << "First character is not B";
    }
    return 0;
}
