#include <iostream>
using namespace std;

class Profit {
    int gained_money;

public:
    Profit(int g=0) {
        gained_money = g;
    }

    friend Profit operator+(Profit a, Profit b);

    void show() {
        cout << "Profit is : " << gained_money;
    }
};

Profit operator+(Profit a, Profit b) {
    Profit temp;
    temp.gained_money = a.gained_money + b.gained_money;
    return temp;
}

int main() {
    Profit c1(45), c2(45), c3;

    c3 = c1 + c2;

    c3.show();

    return 0;
}