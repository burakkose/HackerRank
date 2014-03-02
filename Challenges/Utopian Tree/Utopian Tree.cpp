#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T,N;
    
    while(cin >> T && (1 <= T && T <= 10))
        break;
    for(int i = 0 ; i < T ; i++){
        cin >> N;
        int height = 1;
        for(int j = 0 ; j < N ; j++){
            if(j % 2 == 0)
                height*=2;
            else
                ++height;
        }
        cout<<height<<endl;
    }
    return 0;
}

