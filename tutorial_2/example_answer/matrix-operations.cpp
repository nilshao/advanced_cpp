#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

void print_vector(const std::vector<int> & v)
{
    cout << " [ ";
    for (const auto & elem : v)
    {
        cout << elem << " ";
    }
    cout << "]" << endl;
}

void print_matrix(const std::vector<std::vector<int>> & A)
{
    cout << "[" << endl;
    for (const auto & row : A)
    {
        for (const auto & elem : row)
        {
            cout << elem << " ";
        }
        cout << endl;
    }
    cout << "]" << endl;
}

int main() {

    // Get the vector elements from the user
    std::vector<int> v{};
    cout << "Give elements to the vector (-1 stops)" << endl;
    int x;
    cin >> x;
    while (x != -1)
    {
        v.push_back(x);
        cin >> x;
    }

    // Print the vector v
    cout << "Vector v is:" << endl;
    print_vector(v);

    // Get a square matrix of compatible size
    const auto N = v.size();
    cout << "Give the " << N*N << " elements of matrix A (row-first)" << endl;
    std::vector<std::vector<int>> A(N); // We define just the lines for now
    for (auto i=0; i<N; ++i)
    {
        for (auto j=0; j<N; ++j)
        {
            int y;
            cin >> y;
            A[i].push_back(y);
        }
    }

    // Print the matrix A
    cout << "Matrix A is:" << endl;
    print_matrix(A);

    // Multiply v * A and store it to a vector m
    std::vector<int> m(N, 0);
    for (auto i=0; i<N; ++i)
    {
        for (auto j=0; j<N; ++j)
        {
            m[j] += v[i]*A[i][j];
        }
    }

    // Print the vector m
    cout << "Vector m = v * A is:" << endl;
    print_vector(m);

    return 0;
}