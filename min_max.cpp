
#include <iostream>
using namespace std;

int main() {
    int number;
    int smallest;
    int largest;
    bool has_data = false;
    cout << "Enter a series of integers (-99 to stop): ";
    cin >> number;
    while (number != -99) {
        if (!has_data) {
            smallest = number;
            largest = number;
            has_data = true;
        }
        else {
            if (number < smallest) {
                smallest = number;
            }

            if (number > largest) {
                largest = number;
            }
        }

        cin >> number;
    }
    if (has_data) {
        cout << "Smallest value: " << smallest << endl;
        cout << "Largest value: " << largest << endl;
    }
    else {
        cout << "No data values were entered." << endl;
    }
    return 0;
}
