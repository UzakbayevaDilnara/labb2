#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;
    cin >> num;
    cout << "Pow:" << pow(num, 2);
    cout << " Round:" << round(num);
    cout << " Ceil:" << ceil(num);
    cout << " zFloor:" << floor(num);
    return 0;
}
