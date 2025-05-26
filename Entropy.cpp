#include "Entropy.h"
#include <algorithm>
#include <cctype>
#include <cmath>

float Entropy::calculate(std::string encrypted) {
    int char_counts[26] = {}; //Initialise the count of each letter to 0
    int total = 0;

    std::transform(encrypted.begin(), encrypted.end(), encrypted.begin(), ::tolower);

    //Create count of different letters
    for (; total < encrypted.length(); total++) {
        if ('a' <= encrypted[total] <= 'z')
            char_counts['z' - encrypted[total]]++;
    }

    float curr_entropy = 0.00;

    for (int i = 0; i < 26; i++)
        curr_entropy += (char_counts[i]) * (std::log(char_counts[i]));

    return curr_entropy;
}