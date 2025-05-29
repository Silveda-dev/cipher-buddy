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
            char_counts[encrypted[total] - 'a']++;
    }

    float curr_entropy = 0.00;

    //Apply Shannon entropy formula where frequency is not equal to 0
    for (int i = 0; i < 26; i++)
        if (char_counts[i] != 0)
            curr_entropy += -(static_cast<float>(char_counts[i])/26.00) * ((std::log(static_cast<float>(char_counts[i]/26.00))/std::log(2)));

    return curr_entropy;
}