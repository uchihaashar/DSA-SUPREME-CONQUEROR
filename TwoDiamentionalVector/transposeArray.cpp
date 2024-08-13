#include <iostream>
using namespace std;

void transposeMatrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = i + 1; j < cols; ++j) {
            // Swap elements at (i, j) and (j, i)
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3;
    int col = 3;

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int k = 0; k < col; ++k) {
            cout << arr[i][k] << " ";
        }
        cout << endl;
    }

    transposeMatrix(arr, row, col);

    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < col; ++i) {
        for (int k = 0; k < row; ++k) {
            cout << arr[i][k] << " ";
        }
        cout << endl;
    }



return 0;


}
