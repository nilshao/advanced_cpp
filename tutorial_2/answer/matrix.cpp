#include<iostream>
#include<cassert>
#include<fstream>
#include<vector>
#include<array>
#include<random>
#include<string>

void populate_vector( std::vector<int>& global_cases) {

    auto seed = 0;
    auto min = 0;
    auto max = 100;

    std::mt19937 gen(seed);

    std::uniform_int_distribution<int> unif_distrib(min, max);
    for(auto iter = global_cases.begin(); iter != global_cases.end(); ++iter){
        *iter = unif_distrib(gen);
    }
}
//q1,q2
void print_vector(std::vector<int> &vec){
    std::cout <<"[ "; 
    for(auto i = vec.begin(); i<vec.end(); ++i){
        std::cout << *i << " ";
    }
    std::cout << "]" << std::endl;
}
void print_matrix(std::vector<std::vector<int>> mat){
    
    for(auto v: mat){
        print_vector(v);
    }
    return ;
}

bool vector2matrix(const int N, std::vector<int> &vec, std::vector<std::vector<int>> &matrix){
    if(vec.size()!= N*N) return 0;

    std::vector<int>tmp;
    int count = 0;
    for(int i =0; i<N*N; i++){
        tmp.push_back(vec[i]);
        count++;
        if(count == N){
            matrix.push_back(tmp);
            tmp = {};
            count = 0;
        }
    }
    std::cout <<matrix.size()<<std::endl;
    return 1;
}

int main(){
    std::vector<int> v;
    
    int num;
    while(std::cin >> num){
        v.push_back(num);
        if(std::cin.get()=='\n') break;        
    }

    int N = v.size();

    std::cout << "N is: " << N << std::endl;
    std::cout <<"vector v is: ";
    print_vector(v);

    std::vector<int> A_tmp;
    while(std::cin >> num){
        A_tmp.push_back(num);
        if(std::cin.get()=='\n') break;        
    }
    
    std::vector<std::vector<int>> A;
    if(vector2matrix(N,A_tmp,A)){
        std::cout << "matrix A is: " <<std::endl;
        print_matrix(A);
    }else{
        std::cout << "illegal input!" << std::endl;
    }
    
    //q4
    std::vector<int> m(N, 0);
    for (auto i=0; i<N; ++i)
    {
        for (auto j=0; j<N; ++j)
        {
            m[j] += v[i]*A[i][j];
        }
    }

    // Print the vector m
    std::cout << "Vector m = v * A is:" << std::endl;
    print_vector(m);

    return 0;
}