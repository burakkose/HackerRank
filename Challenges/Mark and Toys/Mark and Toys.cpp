#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long size,rup,result = 0;
    cin >> size >> rup;
    
    vector <long long> vec;
    while(size--){
        long long num;
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    long long k = vec.size();
    for(int i = 0 ; i < k ; i++){
        if(rup-vec[i] >= 0 ){
            rup -= vec[i];
            ++result;
        }
        --k;
    }
    cout << result;
    return 0;
}

