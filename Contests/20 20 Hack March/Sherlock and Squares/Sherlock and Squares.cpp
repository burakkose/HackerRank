#include <cmath>
#include <iostream>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int count = 0;
        for(int i = 1 ; i*i <= b ; i++){
            if(i*i >= a)
                ++count;
        }
        cout << count << endl;
    }
    return 0;
}

