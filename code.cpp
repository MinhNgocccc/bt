#include <iostream>

using namespace std;

// Function to read matrix elements from user input
void readMatrix(int matrix[][100], int row, int column) {
    // Function to read matrix elements from user input
    // Input: matrix - 2D array to store elements, row - number of rows, column - number of columns
    // Output: None

    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to find the maximum element in the matrix
int findMax(int matrix[][100], int row, int column) {
    // Function to find the maximum element in the matrix
    // Input: matrix - 2D array, row - number of rows, column - number of columns
    // Output: Maximum element in the matrix

    int max = matrix[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    return max;
}

// Function to find the minimum element in the matrix
int findMin(int matrix[][100], int row, int column) {
    // Function to find the minimum element in the matrix
    // Input: matrix - 2D array, row - number of rows, column - number of columns
    // Output: Minimum element in the matrix

    int min = matrix[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }
    return min;
}

int main() {
    // Declare variables for number of rows and columns
    int row, column;

    // Prompt user to enter the number of rows
    cout << "Enter the number of rows: ";
    cin >> row;

    // Prompt user to enter the number of columns
    cout << "Enter the number of columns: ";
    cin >> column;

    // Declare a 2D array to store the matrix elements
    int matrix[100][100];

    // Read matrix elements from user input
    readMatrix(matrix, row, column);

    // Find the maximum and minimum elements in the matrix
    int maxElement = findMax(matrix, row, column);
    int minElement = findMin(matrix, row, column);

    // Print the maximum and minimum elements
    cout << "The maximum element is: " << maxElement << endl;
    cout << "The minimum element is: " << minElement << endl;

    return 0;
}