#include <iostream>
using namespace std;

int main() {
    int T,N,C,M;
    
    while(cin>>T && (T>0 && T<=1000))
        break;
    
    for(int i=0 ; i<T ;i++){
        while(cin>>N>>C>>M && ((2<=N && N<=100000) && (1<=C && C<= N) && (2<=M && M<= N)))
            break;
        
        int temp,all,cho = N/C ;
        all=cho;
        while(cho >= M){
            temp=(cho/M);
            all+=temp;;
            cho%=M;
            cho+=temp;
        }
        cout<< all <<endl;
    }
    return 0;
}

