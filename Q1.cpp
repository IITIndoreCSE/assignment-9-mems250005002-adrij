#include <iostream>
using namespace std;

// Define the Item structure
struct Item {
    int id;
    float cost;
};

int main() {
    // Declare an array of 6 Item structures
    Item items[6] = {
        {1, 45.50},  // Initialize first item
        {2, 60.75},  // Initialize second item
        {3, 30.99},  // Initialize third item
        {4, 80.00},  // Initialize fourth item
        {5, 52.30},  // Initialize fifth item (not used in the loop)
        {6, 47.90}   // Initialize sixth item (not used in the loop)
    };

    // Iterate through the entire array
    for (int i = 0; i < 6; ++i) {
        // Check if the cost of the item is greater than 50.00
        if (items[i].cost > 50.00) {
            // Display the item details
            cout << "Item ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }

    return 0;
}
