#include <iostream>
#include <algorithm>
using namespace std;
// Function to calculate maximum of three numbers
int max(int x, int y, int z) {
    return max(max(x, y), z);
}

// Function to calculate y = max(a, 5a + b, a - b) - max(b, 2b - a, b + 2a)
int calculateY(int a, int b) {
    int firstMax = max(a, 5*a + b, a - b);
    int secondMax = max(b, 2*b - a, b + 2*a);

    return firstMax - secondMax;
}

int main() {
    // Example usage
    int a = 10;
    int b = 5;

    int result = calculateY(a, b);

    cout << "Result: " << result << endl;

    return 0;
}
