#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

vector<vector<int>> createTestMatrix(int n) {
    vector<vector<int>> testMatrix(n, vector<int>(n, 0));

    // Initialize the matrix with values (for demonstration purposes)
    int value = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            testMatrix[i][j] = value++;
        }
    }

    return testMatrix;
}

// Function to perform matrix multiplication
vector<vector<int>> matrixMultiply(const vector<vector<int>>& A,
 const vector<vector<int>>& B) {
    int m = A.size();
    int n = A[0].size(); 
    int p = B[0].size();

    vector<vector<int>> result(m, vector<int>(p, 0));
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return result;
}

int main() {
   int n = 256 ;
   vector<vector<int>> A = createTestMatrix(n) ;
   vector<vector<int>> B = createTestMatrix(n) ;

    std::cout << "calculating dense matrix multiplication with "<< n << " by "<< n << " dimensions" << std::endl ;
    // Time measurement
    auto start = high_resolution_clock::now();

    // Calculate the result of matrix multiplication
    vector<vector<int>> result = matrixMultiply(A, B);

    // Stop the timer
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    /*
    // Print the result matrix
    cout << "Result of matrix multiplication:" << endl;
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    */

    // Print the execution time
    cout << "Execution time: " << duration.count() << " microseconds" << endl;

    return 0;
}