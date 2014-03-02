#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int limit_m = pow(10.0,5.0);
    const int limit_can = pow(10.0,9.0);
    long long int N,K;
    while(cin >> N && (1 <= N && N <= limit_m)){
        while(cin >> K && (1 <= K && K <= N))
            break;
        break;
    }

    vector<int> candies ;
    long long int num;
    for(int i=0 ; i<N ; i++){
        while(cin >> num && (0 <= num && num <= limit_can))
            break;
        candies.push_back(num);
    }
    
    sort(candies.begin(),candies.end());
    int ans=999999999,temp;
    for(int i=0;i<=N-K;i++)
    {
        temp = candies[i+K-1]-candies[i];
        if(temp < ans)
            ans = temp;
    }
    cout << ans;
    
    return 0;
}

