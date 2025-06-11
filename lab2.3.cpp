#include <iostream>
using namespace std;

int main() {
    bool a = true, b = false;
    cout << "AND:" << (a && b);   
    cout << " OR:" << (a || b);    
    cout << " XOR:" << (a ^ b); 
    cout << " NOT a:" << !a; 
    return 0;
}

