#include <iostream>
#include <utility>
using namespace std;

class Book {
public:
    int sid;

    // Default constructor
    Book() {
        sid = 0;
        cout << "Default constructor: " << sid << endl;
    }

    // Parameterized constructor
    Book(int id) {
        sid = id;
        cout << "Parameterized constructor: " << sid << endl;
    }

    // Copy constructor
    Book(const Book &b) {
        sid = b.sid;
        cout << "Copy constructor: " << sid << endl;
    }

 //Move constructor
   Book(Book &&b) {
       sid = b.sid;
       b.sid = 0;
       cout << "Move constructor: " << sid << endl;
   }
};

int main() {
    Book b;
    Book b1(111);
    Book b2(b1);
   Book b3(move(b1));
    return 0;
}