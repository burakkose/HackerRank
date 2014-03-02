#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef unsigned long long uint64;

// get greatest common divisor
uint64 gcd(uint64 a, uint64 b);

int main()
{
    int N; // num of unfriendly numbers
    uint64 K; // friendly number
    vector<uint64> unfriendly; // unfriendly numbers
    vector<uint64> divisible; // list of numbers that can divide K
    int output = 0; // output
    uint64 i, j;

    // initialize problem
    cin >> N >> K;

    unfriendly = vector<uint64>(N, 0);
    for (i = 0; i < N; i++)
        cin >> unfriendly[i];

    // get all numbers that divides K
    uint64 bound = (uint64)sqrt(K);
    divisible = vector<uint64>(2*bound, 0);

    j = 0;

    for (i = 1; i <= bound; i++) {
        if (K % i == 0) {
            divisible[j] = i;
            divisible[j+1] = K/i;

            j += 2;
        }
    }

    // get number of divisibles for K
    int num_divisible;

    if (divisible[j-2] == divisible[j-1]) num_divisible = j-1;
    else num_divisible = j;

    // use gcd to get a new list of unfriendly numbers
    // this is critical for speeding up the program
    vector<uint64> new_unfriendly; // new unfriendly list
    uint64 temp;
    bool match;

    for (i = 0; i < N; i++) {
        temp = gcd(unfriendly[i], K);
        match = false;

        for (j = 0; j < new_unfriendly.size(); j++) {
            // remove redundancy
            if (temp == new_unfriendly[j]) {
                match = true;
                break;
            }
        }

        if (match == false)
            new_unfriendly.push_back(temp);
    }

    // find divisibles for K that also devices unfriendlys
    // also calculate output
    bool is_divisible = false;

    // sweep all numbers that divides K except 1
    for (i = 1; i < num_divisible; i++) {
        is_divisible = false;

        // sweep all unfriendly numbers
        for (j = 0; j < new_unfriendly.size(); j++) {
            if (new_unfriendly[j] % divisible[i] == 0) {
                is_divisible = true;
                break;
            }
        }

        if (is_divisible == false)
            output++;
    }

    cout << output << endl;

    return 0;
}


uint64 gcd(uint64 a, uint64 b)
{
    while (1) {
        a = a % b;
        if (a == 0)
            return b;

        b = b % a;
        if( b == 0 )
            return a;
    }
}
