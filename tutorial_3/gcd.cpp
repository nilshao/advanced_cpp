#include <iostream>
int gcd_recursion(int a, int b){
    
    return (a%b==0) ? b:gcd_recursion(b, a%b) ;
}
int gcd_iteration(int a, int b){
    int tmp,res;
    while(a % b != 0){
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return b;
}
int main(){
    int a,b;
    std::cout << "input 2 numbers"<<std::endl;
    std::cin >> a >> b;
    if(a<b) std::swap(a,b);
    std::cout << "num you put in is: "<<a<<" "<<b<<std::endl;
    std::cout << "solved by recursion is: "<<gcd_recursion(a,b)<<std::endl;
    std::cout << "solved by iteration is: "<<gcd_iteration(a,b)<<std::endl;
    return 0;
}