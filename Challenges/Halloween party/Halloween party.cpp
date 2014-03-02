#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    long int K,K2,result;
    cin >> T ;
    for(int i = 0 ; i < T ; i++){
        cin >> K ;
        K2 = K / 2 ;
        if(K2 * 2 == K)
            result = K2 * K2 ;
        else
            result = K2 * (K2+1);
        cout<<result<<endl;

    }
    return 0;
}

