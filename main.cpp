#include <iostream>
#include "gamesession.h"

using namespace std;

class Position {
    private:
        int x;
        int y;
    public:
        int getX() {
            return x;
        }
        int getY() {
            return y;
        }
        void setX(int newX) {
            x = newX;
        }
        void setY(int newY) {
            y = newY;
        }
        Position(int initX, int initY) {
            x = initX;
            y = initY;
        }
};

// & means "by reference"
int addFive(int& number) {
    number += 5;
    return number;
}

void addFiveToArray(int numArray[], int size) {
    for(int i = 0; i < size; i++) {
        numArray[i] += 5;
    }
}

void addFiveToPosition(Position& pos) {
    pos.setX(pos.getX() + 5);
    pos.setY(pos.getY() + 5);
}

int main() {
    int x = 0;
    addFive(x); // pass by value
    cout << "\n\nx is equal to: " << x << endl;
    int xArray[5] = {0, 3, 7, 9, 11};
    addFiveToArray(xArray, 5); // pass by reference
    for(int i = 0; i < 5; i++) {
        cout << endl << xArray[i];
    }
    cout << endl << endl;
    Position myNewPosition(3,7);
    cout << "The position's x is: " << myNewPosition.getX() << endl;
    cout << "The position's y is: " << myNewPosition.getY() << endl;
    addFiveToPosition(myNewPosition);
    cout << "The position's new x is: " << myNewPosition.getX() << endl;
    cout << "The position's new y is: " << myNewPosition.getY() << endl;
}