#include <iostream>
using namespace std;

// Define a structure 'Point' with members x and y
struct Point {
    float x;
    float y;
};

int main() {
    Point points[7];   // Array of 7 'Point' structures
    int count = 0;     // To count points in the first quadrant

    cout << "Enter coordinates for 7 points (x, y):\n";

    // Input loop
    for (int i = 0; i < 7; i++) {
        cout << "Point " << i + 1 << " - x: ";
        cin >> points[i].x;

        cout << "Point " << i + 1 << " - y: ";
        cin >> points[i].y;
    }

    // Counting points in the first quadrant (x > 0, y > 0)
    for (int i = 0; i < 7; i++) {
        if (points[i].x > 0 && points[i].y > 0) {
            count++;
        }
    }

    // Display result
    cout << "\nNumber of points in the first quadrant: " << count << endl;

    return 0;
}
