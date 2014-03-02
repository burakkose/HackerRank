#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    while(cin>>T && (1<=T && T<=50))
        break;
    for(int j=0;j<T;j++){
        int M;
        while(cin>>M && (2<=M && M<=10000))
            break;
        int N;
        while(cin>>N && (2<=N && N<=10000))
            break;
        vector<int>flavors;
        int num;
        for(int i=0;i<N;i++){
            while(cin>>num && (1<=T && T<=10000))
                break;
            flavors.push_back(num);
        }
        int size = flavors.size();
        vector<int>ans;
        ans.clear();
        for(int i=1 ; i< size ; i++){
            for(int j=0;j<i;j++){
                if(flavors[i]+flavors[j]==M){
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                    break;
                }
            }
            if(ans.size()==2)
                break;
        }
        sort(ans.begin(),ans.end());
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}

