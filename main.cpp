#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

    srand(time(NULL));
    std::cout << rand()%900+100 << std::endl;

    return 0;

};