#include <stdio.h>

int main() {
    long int N,M,a,b,k,result = 0;
    scanf("%ld %ld",&N,&M);
    for(long int i = 0 ; i < M ;i++){
        scanf("%ld %ld %ld",&a,&b,&k);
        result += ((b-a+1)*k);
    }
    printf("%ld",result/N) ;
    return 0;
}

