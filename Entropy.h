#ifndef ENTROPY_H
#define ENTROPY_H

#include <string>

class Entropy {
    public:
        static float calculate(std::string encrypted);
};

#endif