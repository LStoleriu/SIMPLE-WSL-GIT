#include <iostream>
#include <random>
 
int main()
{
    std::random_device rd{};  //Will be used to obtain a seed for the random number engine
    std::mt19937_64 gen{rd()}; //Standard mersenne_twister_engine seeded with rd()
    std::normal_distribution<double> norm_dis(0, 0.1);
    std::uniform_real_distribution<double> dis(0, 1);
 
    for (int n=0; n<20; ++n)
        std::cout << dis(gen) << ' ';

    std::cout << '\n';

    for (int n=0; n<12; ++n)
        std::cout << norm_dis(gen) << ' ';
        
    std::cout << '\n';
}