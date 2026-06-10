#include <iostream>
using namespace std;

int func1() {
    int x = 3;
    int y = 2;
    int z = x + y;

    return z;
}
int func2() {
    int a = 3;
    int b = 2;
    int c = a + b;

    return c;
}

int main() {
    cout << func1() << endl;
    cout << func2() << endl;
    return 0;
};
