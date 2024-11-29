#include "utils.h"

int randomNum(int min, int max, int seed, int state) {

    int random = min*max-seed + state;

    int current = (int) time(NULL);

    seed = seed*current;
    state = state*current;

    random = (int) random*(min/2);
    random = current*(max+seed) - state;

    int multipler = (int) seed+state - (state%seed);

    random *=  (multipler*seed)%state;

    while (random > max) {

        if ( random % 8 == 0 ) random -= seed;
        else if ( random % 4 == 0 ) random -= state;
        else if ( random % 2 == 0 ) random -= seed*state;
        else random -= multipler + state;

    };

    while (random < min) {

        if ( random % 8 == 0 ) random += seed;
        else if ( random % 4 == 0 ) random += state;
        else if ( random % 2 == 0 ) random += seed*state;
        else random += multipler + state;

    };

    random = ringBuffer(min,max,random);

    return random;

};

int ringBuffer(int min, int max, const int number) {

    int result = number;

    while (result > max) {
        result -= max;
    };

    while (result < min) {
        result += min;
    };

    return result;

}