// Dai(a1837470), Dil(a1825200), Swapnil(a1848855), Duong(a1876928)
#ifndef BIGNUMCALC_H
#define BIGNUMCALC_H
#include <iostream>
#include <list>
#include <string>

class BigNumCalc {
    private:
    std::list<int> addCarry(std::list<int> in1 , std::list<int> in2 , int carry , std::list<int> currentList);
    std::list<int> subCarry(std::list<int> in1 , std::list<int> in2 , int carry , std::list<int> currentList);

    public:

    std::list<int> buildBigNum(std::string strInput);

    std::list<int> add(std::list<int> num1Input , std::list<int> num2Input);

    std::list<int> sub(std::list<int> num1Input , std::list<int> num2Input);

    std::list<int> mul(std::list<int> num1Input , std::list<int> num2Input);
};



#endif