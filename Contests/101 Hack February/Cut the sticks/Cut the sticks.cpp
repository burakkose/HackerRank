#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T,num;
    cin >> T;
    vector <int> vec;
    vector <int> temp;
    while(T--){
        cin >> num;
        vec.push_back(num);
    }
    while(vec.size()!=0){

        for(int k = 0 ; k < vec.size() ; k++){
            if(vec[k] > 0)
                temp.push_back(vec[k]);
        }
        sort(temp.begin(),temp.end());
        if(!temp.empty())
            cout << temp.size() <<endl;
        for(int k = 1 ; k < temp.size() ; k++){
            temp[k] -= temp[0];
        }
        if(!temp.empty())
            temp.erase(temp.begin());
        vec.clear();
        vec = temp ;
        temp.clear();
    }
    return 0;
}
