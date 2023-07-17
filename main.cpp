#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    cout << "DICE ROLL SIMULATOR" << endl;
    srand(time(0));

    int rando = 1 + (rand() % 6);
    cout << rando << endl;

    return 0;
}
