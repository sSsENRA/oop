#include <iostream>
#include <algorithm>
using namespace std;

// Function to calculate maximum of three numbers
int max(int x, int y, int z) {
    return max(max(x, y), z);
}

// Function to calculate y = max(3, a + b, c) - max(b + a, b + c, a + c)
int calculateY(int a, int b, int c) {
    int firstMax = max(3, a + b, c);
    int secondMax = max(b + a, b + c, a + c);

    return firstMax - secondMax;
}

int main() {
    // Example usage
    int a = 10;
    int b = 5;
    int c = 8;

    int result = calculateY(a, b, c);

    cout << "Result: " << result << endl;

    return 0;
}
