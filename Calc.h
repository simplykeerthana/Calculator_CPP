#ifndef CALC_H
#define CALC_H

#include <string>
using namespace std;
class Calc{

public:
    Calc(int val);
    Calc(const Calc &rhs);
    ~Calc();
    const Calc &operator=(const Calc &rhs);
        double process(string userInput, double prevValue);

        void print();

        string* storedExpressions;
        void setStored(size_t newStored);
        size_t getStored();

private:
    size_t stored;

};

#endif //Calc_H