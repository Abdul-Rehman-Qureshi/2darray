#include <iostream>

const int ROWS = 3;
const int COLS = 3;

int main() {
    int matrix[ROWS][COLS];

    // Input values into the matrix
    std::cout << "Enter values for the matrix:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << "Enter value for element (" << i << ", " << j << "): ";
            std::cin >> matrix[i][j];
        }
    }

    // Display the matrix
    std::cout << "\nMatrix:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

