#include <iostream>
#include <vector>

template<typename T>
void print_vec(const std::vector<T> & v)
{
    std::cout << " [ ";
    for (const auto & elem : v)
    {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}


template<typename T>
void print_matrix(const std::vector<std::vector<T>> & A)
{
    std::cout << "[" << std::endl;
    for (const auto & row : A)
    {
        print_vec(row);
    }
    std::cout << "]" << std::endl;
}

int main() {

    std::vector<std::vector<float>> A = { {1.3 , 2.2},
                                        {3.4 , 2.4}};
    std::vector<float> v = { 1.3 , 3.1};

    auto N = v.size();

    // Print the matrix A
    std::cout << "Matrix A is:" << std::endl;
    print_matrix(A);

    // print vector v
    std::cout << "Vector V is:" << std::endl;
    print_vec(v);

    // Multiply v * A and store it to a vector m
    std::vector<float> m(N, 0);
    for (auto i=0; i<N; ++i)
    {
        for (auto j=0; j<N; ++j)
        {
            m[i] += v[i]*A[i][j];
        }
    }

    // Print the vector m
    std::cout << "Vector m = v * A is:" << std::endl;
    print_vec(m);

    return 0;
}
