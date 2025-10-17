#include <iostream>
using namespace std;

// Define a structure named 'Item'
struct Item {
    int id;
    float cost;
};

int main() {
    // Declare an array of 6 Item structures
    Item items[6] = {
        {101, 45.50},
        {102, 78.90},
        {103, 30.00},
        {104, 120.75},
        // Remaining 2 items (uninitialized — default values)
    };

    cout << "Items with cost greater than 50.00:\n";

    // Iterate through all 6 elements
    for (int i = 0; i < 6; i++) {
        if (items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id 
                 << ", Cost: " << items[i].cost << endl;
        }
    }

    return 0;
}
