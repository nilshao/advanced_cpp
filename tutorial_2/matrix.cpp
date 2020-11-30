#include<iostream>
#include<cassert>
#include<fstream>
#include<vector>
#include<array>
#include<random>
#include<string>
#include<tuple>

void populate_vector( std::vector<unsigned int>& global_cases) {

    auto seed = 0;
    auto min = 0;
    auto max = 100;

    std::mt19937 gen(seed);

    std::uniform_int_distribution<unsigned int> unif_distrib(min, max);
    for(auto iter = global_cases.begin(); iter != global_cases.end(); ++iter){
        *iter = unif_distrib(gen);
    }
}
void print_vector(std::vector<unsigned int> &vec){
    for(auto i = vec.begin(); i<vec.end(); ++i){
        std::cout << *i << " ";
    }
    std::cout << "/n";
}
int main(){

    //q1
    std::vector<unsigned int> v(100,0);
    //q2
    populate_vector(v);
 //   print_vector(v);
    std::vector<std::vector<unsigned int>> A;
    for(auto i=0;i<v.size(); ++i){
        std::vector<unsigned int> tmp(100,0);
        populate_vector(tmp);
        A.push_back(tmp);
    }
    //q4
    std::vector<unsigned int> res

    return 0;
}