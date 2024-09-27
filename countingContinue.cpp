#include <iostream>
using namespace std;

int main() {
    int n = 3;  // size of the square
    int num = 1;  // start counting from 1

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;  // move to the next line after each row
    }

    return 0;  // return after all rows are printed
}
