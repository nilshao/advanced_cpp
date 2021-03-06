# 练习

## 重载操作符

```C++
std::ostream& operator<<(std::ostream& os, std::vector<double> vec)
{
    for(const auto& elem : vec)
    {
        os << elem << " " ;
    }
    os << '\n';
    return os;
}
```

## 产生随机数

### 随机产生正态分布

```C++
#include<random>
#include<vector>
void random_generator(std::vector<unsigned int>& vector_input) {
    /*
    * Populate a vector with pseudo-random data generated using the mersenne
    * twister engine from <random>. The seed is set to 0 so that everyone
    * gets the same sequence of 'random' numbers.
    */

    auto seed = 0;
    auto min = 0;
    auto max = 10000;

    // mt19337: a pseudo random generator using the mersenne twister engine ( from <random> )
    // The value of gen will be updated every time we access it.
    std::mt19937 gen(seed);

    // uniform_int_distribution: use the mersenne twister engine to generate a uniform random distribution over (min, max)
    std::uniform_int_distribution<unsigned int> unif_distrib(min, max);
    /* 
    * generate samples from the uniform distribution above like so:
    * unif_distrib(gen)
    */ 

   for(auto iter = vector_input.begin(); iter != vector_input.end(); ++iter){
       *iter = unif_distrib(gen);
   }
}
```

## 交换数字：
三种方式
```C++
    //standard std functions
    std::swap(a,b);

    // swap variables using arithmetic operations
    void swapArithmetic(int &a, int &b)
    {
        b += a;
        a = b - a;
        b -= a;
    }

    // swap variables using logical operations
    void swapXor(int &a, int &b)
    {
        b = a ^ b;
        a = a ^ b;
        b = a ^ b;
    }

```

## 






