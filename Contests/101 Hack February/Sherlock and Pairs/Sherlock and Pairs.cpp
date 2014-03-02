#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long T;
    cin >> T;
    
    long long N,num,result=1,sum=0;
    vector<long long> vec;
    while(T--){
        cin >> N;
        while(N--){
            cin >> num ;
            vec.push_back(num);
        }
        sort(vec.begin(),vec.end());
        for(int j = 1 ; j < vec.size() ; ++j){
            if((vec[j-1] == vec [j])){
                ++result;
            }else{
                if(result == 1)
                    continue;
                sum += result * (result-1);
                result = 1;
            }
            if((j+1==vec.size()))
                sum += result * (result-1);
        }
        cout << sum <<endl;
        result = 1;
        sum = 0;
        vec.clear();
    }
    return 0;
}



