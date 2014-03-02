#include <vector>
#include <iostream>
using namespace std;

void insertionSort(vector <int> &v){
    int result = 0;
    for(int i = 1 ; i < v.size() ; i++){
        int k = i;
        while(k > 0 && (v[k] < v[k-1])){
            int temp = v[k];
            v[k] = v[k-1];
            v[k-1] = temp;
            ++result;
            --k;
        }
    }
    cout << result <<endl;
}

int main() {
    int ttime,num;
    cin >> ttime;
    
    vector <int> vec;
    while(ttime--){
        cin >> num;
        vec.push_back(num);
    }
    insertionSort(vec);
    return 0;
}

