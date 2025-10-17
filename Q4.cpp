#include <iostream>
#include <string>
using namespace std;

// Define the SalesRecord structure
struct SalesRecord {
    string month;
    float amount;
};

int main() {
    SalesRecord sales[12];

    cout << "Enter sales data for each month:\n";

    // Input sales data for 12 months
    for (int i = 0; i < 12; ++i) {
        cout << "Month " << i + 1 << " Name: ";
        getline(cin, sales[i].month);
        cout << "Sales Amount: ";
        cin >> sales[i].amount;
        cin.ignore(); // Clear newline from buffer
    }

    // Initialize max and min trackers
    int maxIndex = 0;
    int minIndex = 0;

    // Single pass to find max and min sales months
    for (int i = 1; i < 12; ++i) {
        if (sales[i].amount > sales[maxIndex].amount) {
            maxIndex = i;
        }
        if (sales[i].amount < sales[minIndex].amount) {
            minIndex = i;
        }
    }

    // Display results
    cout << "Month with maximum sales: " << sales[maxIndex].month 
         << " with amount " << sales[maxIndex].amount << "\n";

    cout << "Month with minimum sales: " << sales[minIndex].month 
         << " with amount " << sales[minIndex].amount << "\n";

    return 0;
}

