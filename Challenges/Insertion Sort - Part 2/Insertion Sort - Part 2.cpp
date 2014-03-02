#include <vector>
#include <iostream>
using namespace std;

template <class T>
void insertionSort(T vct) {

    for(int i = 1 ; i < vct.size() ; i++){
        int k = i;
        while(k > 0 && (vct[k] < vct[k-1])){
            int temp = vct[k];
            vct[k] = vct[k-1];
            vct[k-1] = temp;
            --k;
        }
        for(int j = 0 ; j < vct.size() ; j++)
            cout << vct[j] <<" ";
        cout << endl;
    }

}
int main(void) {

    int arSize;
    cin >> arSize;
    
    vector <int> vec;
    while(arSize--){
        int num;
        cin >> num;
        vec.push_back(num);
    }
    insertionSort(vec);

    return 0;
}
