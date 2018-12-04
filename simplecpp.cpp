#include <iostream>
#include <random>
 
int main()
{
    std::random_device rd;  //Will be used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    std::normal_distribution<> norm_dis(0.0, 0.3);
    std::uniform_real_distribution<double> dis(0, 1);
 
    for (int n=0; n<20; ++n)
        std::cout << dis(gen) << ' ';

    std::cout << '\n';

    for (int n=0; n<5; ++n)
        std::cout << norm_dis(gen) << ' ';
        
    std::cout << '\n';
}