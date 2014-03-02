#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void copytovec(const vector <int> &first,vector <int> &second,int ii,int jj){
    for(int i = ii ; i <= jj ; i++)
        second.push_back(first[i]);
}

int main() {
    int N,T;
    cin >> N >> T;
    int num;
    vector <int> vec;
    for(int i = 0; i < N ; i++){
        cin >> num;
        vec.push_back(num);
    }
    int ii,jj;
    vector <int> temp;
    for(int i = 0 ; i < T ; i++){
        cin >> ii >> jj;
        copytovec(vec,temp,ii,jj) ;
        sort(temp.begin(),temp.end());
        cout << temp[0] << endl;
        temp.clear();
    }
    return 0;
}

