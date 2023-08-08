import time
def create_test_matrix(n):
    # Initialize the test matrix with values (for demonstration purposes)
    value = 1
    test_matrix = [[value + i + j for j in range(n)] for i in range(n)]

    return test_matrix

# Function to perform matrix multiplication
def matrix_multiply(A, B):
    m, n, p = len(A), len(A[0]), len(B[0])

    result = [[sum(A[i][k] * B[k][j]
                    for k in range(n))
                      for j in range(p)]
                        for i in range(m)]
    return result

n = 256
A = create_test_matrix(n)
B = create_test_matrix(n)
print("Calculating ", n, " x ",n, "Matrix multiplication")
start_time = time.time()
result = matrix_multiply(A, B)
end_time = time.time()
elapsed_time = end_time - start_time
print("Elapsed time:", elapsed_time, "seconds")