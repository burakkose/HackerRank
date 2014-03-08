#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(long long num){
    long long x = sqrt(num);
    return (x*x == num) ;
}

bool isFibonacci(long long n)
{
    return isPerfectSquare(5*n*n + 4) ||
            isPerfectSquare(5*n*n - 4);
}
int main() {
    long long N,num;
    cin >> N;
    for(long long i = 0 ; i < N ; i++){
        cin  >> num;
        isFibonacci(num) ? cout << "IsFibo" : cout << "IsNotFibo" ;
        cout << endl;
    }
    return 0 ;
}
