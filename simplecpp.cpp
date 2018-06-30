#include <iostream>
#include <random>
 
int main()
{
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> dis(1, 6);
 
    for (int n=0; n<20; ++n)
        std::cout << dis(gen) << ' ';
    std::cout << '\n';
}