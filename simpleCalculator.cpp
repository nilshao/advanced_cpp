#include <iostream>
#include <cmath>
#define PI 3.1415926

double sum(double a, double b){
    double res = a + b;
    return res;
}

double subtract(double a, double b){
    double res = a - b;
    return res;
}

double mean(double a, double b){
    double res = (a+b)/2;
    return res;
}
double multiply(double a, double b){
    double res = a * b;
    return res;
}
double divide(int a, int b){
    double res = (double)a/b;
    return res;
}
double multiply(int a, int b){
    double res = a * b;
    return res;
}
double square(double a){
    return a*a;
}
int main(){

    double a = 3.35;
    double b = 24;

    int c = 49;
    int d = 3;

    std::cout << sum(a,b) << std::endl;
    std::cout << subtract(a,b) <<std::endl;
    std::cout << mean(a,b) <<std::endl;
    std::cout << multiply(a,b) <<std::endl;
    std::cout << divide(a,b) <<std::endl;
    std::cout << multiply(c,d) <<std::endl;
    std::cout << divide(c,d) <<std::endl;
    std::cout << square(a) <<std::endl;
    std::cout << "pi is: " << PI << std::endl;
    std::cout << sin( 0.5*PI ) <<std::endl;
    return 0;
}