#include <iostream>
#include <vector>

using namespace std;

void initializeMatrix(vector<vector<int>>& matrix, int rows, int cols) {
    matrix.resize(rows, vector<int>(cols, 0));
}

void setElement(vector<vector<int>>& matrix, int rows, int cols, int r, int c, int value) {
    if (r >= 0 && r < rows && c >= 0 && c < cols) {
        matrix[r][c] = value;
    }
}

bool isSquare(const vector<vector<int>>& matrix, int rows, int cols) {
    return rows == cols;
}

bool isDiagonal(const vector<vector<int>>& matrix, int rows, int cols) {
    if (!isSquare(matrix, rows, cols)) return false;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i != j && matrix[i][j] != 0) return false;
        }
    }
    return true;
}

bool isLowerTriangular(const vector<vector<int>>& matrix, int rows, int cols) {
    if (!isSquare(matrix, rows, cols)) return false;
    for (int i = 0; i < rows; ++i) {
        for (int j = i + 1; j < cols; ++j) {
            if (matrix[i][j] != 0) return false;
        }
    }
    return true;
}

bool isUpperTriangular(const vector<vector<int>>& matrix, int rows, int cols) {
    if (!isSquare(matrix, rows, cols)) return false;
    for (int i = 1; i < rows; ++i) {
        for (int j = 0; j < i; ++j) {
            if (matrix[i][j] != 0) return false;
        }
    }
    return true;
}

void display(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows = 3, cols = 3;
    vector<vector<int>> matrix;
    initializeMatrix(matrix, rows, cols);

    setElement(matrix, rows, cols, 0, 0, 1);
    setElement(matrix, rows, cols, 1, 1, 2);
    setElement(matrix, rows, cols, 2, 2, 3);

    cout << "Matrix:" << endl;
    display(matrix);

    cout << "Is Square: " << isSquare(matrix, rows, cols) << endl;
    cout << "Is Diagonal: " << isDiagonal(matrix, rows, cols) << endl;
    cout << "Is Lower Triangular: " << isLowerTriangular(matrix, rows, cols) << endl;
    cout << "Is Upper Triangular: " << isUpperTriangular(matrix, rows, cols) << endl;

    return 0;
}